


#include<LPC214X.h>

void init(){
	PINSEL0=0X05;
	U0FCR=0X07;
	U0LCR=0X83;
	U0DLL=0X5D;
	U0DLM=0X00;
	U0LCR=0X03;
}
void delay(){
	int i;
	for(i=0;i<2000000;i++);
}

int main(){
	unsigned char p[]="i love ISE";
	int z;
	init();
	for(z=0;z<=11;z++){
		U0THR =p[z];
		while(!(U0LSR&0X20));
		delay();
	}
	while(1);
}
		
	
	  
	