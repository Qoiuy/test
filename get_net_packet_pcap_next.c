/*
	edit:Lilac

*/

#include<stdio.h>
#include<pcap.h>
int main(){
	
	char errbuf[PCAP_ERRBUF_SIZE], *dev;
	dev = pcap_lookupdev(errbuf);

	pcap_t * dev_port = pcap_open_live(dev, 65535, 0, 0, errbuf);

	struct pcap_pkthdr packet;
	const u_char * string = pcap_next(dev_port, &packet);
		
		
	int i;
	for (i = 0; i < packet.len; ++i){
		printf(" %02x",string[i]);
		if( (i+1)%16 == 0)
		printf("\n");
	}

	pcap_close(dev_port);

	return 0;
}
