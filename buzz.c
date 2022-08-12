#include <stdio.h>
#include "NUC1xx.h"
#include "Driver\DrvGPIO.h"
#include "Driver\DrvUART.h"
 
int main(void)
{
		UNLOCKREG(); //UNLOCK REGISTER FOR PROGRAMMING
		DrvSYS_Open(48000000); //set System clock to run at 48MHz
		LOCKREG(); //LOCK register from programming
		DrvGPIO_Open(E_GPB, 11, E_IO_OUTPUT); //intial GPIO pin GPB11 for controlling buzzer 
		while(1){
		DrvGPIO_ClrBit(E_GPB,11); //GPB11 = 0 to turn on buzzer
		DrvSYS_Delay(100); //delay
		DrvGPIO_SetBit(E_GPB,11); //GPB11 = 1 to turn off buzzer
		DrvSYS_Delay(100000000000000); //delay
		}
}