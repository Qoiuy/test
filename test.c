/*
	edit:Lilac
*/


#include<stdio.h>
#include<pcap.h>
#include"five_tuple.h"
void getpacket(u_char *arg, const struct pcap_pkthdr * pkthdr, const u_char *packet){
	analysis(packet);

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
