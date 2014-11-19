/*
	edit:Lilac
*/

#include<stdio.h>
#include<pcap.h>
void analysis(const u_char * string){
        int Protocol;
        Protocol = string[23];
        if (Protocol == 6)
                printf("TCP : ");
        else if(Protocol == 17)
                printf("UDP : ");
        else
                printf("I don't know");
        printf("Source IP : %d.%d.%d.%d:",string[26],string[27],string[28],string[29]);
        printf("%d--->",string[34]*256+string[35]);
        printf("Destination IP : %d.%d.%d.%d:",string[30],string[31],string[32],string[33]);
        printf("%d\n",string[36]*256+string[37]);
}
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
