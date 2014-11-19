/*
	edit : Lilac	
*/



void analysis(const u_char * string){
        printf("Destination Address : %02x %02x %02x %02x %02x %02x\n",string[0],string[1],string[2],string[3],string[4],string[5]);
        printf("Source Address : %02x %02x %02x %02x %02x %02x\n",string[6],string[7],string[8],string[9],string[10],string[11]);
        printf("Type : 0x%02x%02x\n",string[12], string[13]);
        printf("Version : %d\n",(string[14]/16));
        printf("Header length : %dB\n",string[14]%16);
        printf("DS : 0x%02x\n",string[15]);
        printf("Total Length : %d\n",string[16]*256+string[17]);
        printf("Identication : 0x%02x%02x\n",string[18], string[19]);
        printf("Flags : 0x%02x\n",string[20]/32);
        printf("Fragment offset : %d\n",string[20]%32+string[21]);
        printf("Time to live : %d\n",string[22]);
        printf("Protocol : %d\n",string[23]);
        printf("Header checksum : 0x%02x%02x\n",string[24],string[25]);
        printf("Source IP : %d.%d.%d.%d\n",string[26],string[27],string[28],string[29]);
        printf("Destination IP : %d.%d.%d.%d\n",string[30],string[31],string[32],string[33]);
        printf("Source Port : %d\n",string[34]*256+string[35]);
        printf("Destination Port : %d\n",string[36]*256+string[37]);
        printf("Sequence number : %02x %02x %02x %02x\n",string[38],string[39],string[40],string[41]);
        printf("Acknowledgement number : %02x %02x %02x %02x\n",string[42],string[43],string[44],string[45]);
        printf("Header length : %d\n",string[46]/16);
        printf("Reserved : %d\n",string[46]/2%8);
        printf("Nonce : %d\n",string[46]%2);
        printf("Congestion : %d\n",string[47]/128);
        printf("ECN-Echo : %d\n",string[47]/64%2);
        printf("Urgent : %d\n",string[47]/32%2);
        printf("Acknowledgement : %d\n",string[47]/16/2);
        printf("Push : %d\n",string[47]/8%2);
        printf("Reset : %d\n",string[47]/4%2);
        printf("Fin : %d\n",string[47]%2);
        printf("Window size : %d\n",string[48]*256+string[49]);
        printf("Checksum : 0x%02x%02x\n",string[50],string[51]);
        printf("Good Checksum : %02x\n",string[50]);
        printf("Bad Checksum : %02x\n",string[51]);
}
