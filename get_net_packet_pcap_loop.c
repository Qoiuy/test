/*
	edit:Lilac
*/


#include<stdio.h>
#include<pcap.h>
void getpacket(u_char *arg, const struct pcap_pkthdr * pkthdr, const u_char *packet){
	int i;
	for(i = 0; i < pkthdr->len; ++i){
		printf(" %02x",packet[i]);
		if( (i+1)%16 == 0)
		printf("\n");
	}	
}
int main(){
	
	char errbuf[PCAP_ERRBUF_SIZE], *dev;
	dev = pcap_lookupdev(errbuf);

	pcap_t * dev_port = pcap_open_live(dev, 65535, 0, 0, errbuf);

	int id = 0;
	pcap_loop(dev_port, -1, getpacket, (u_char *)&id);	

			
	pcap_close(dev_port);

	return 0;
}
