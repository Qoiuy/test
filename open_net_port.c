/*
	edit:Lilac
*/
#include<stdio.h>
#include<pcap.h>
int main(){
	
	char errbuf[PCAP_ERRBUF_SIZE], *dev;
	dev = pcap_lookupdev(errbuf);
	if(!dev)
		printf("Sorry , Can't get net port,please add net port by hand");
	
	pcap_t * dev_port;
	dev_port = pcap_open_live(dev, 65535, 0, 0, errbuf);

	





	pcap_close(dev_port);




	return 0;
}
