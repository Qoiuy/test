/*
	edit : Lilac	
*/



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
