
#include "timer.h"
	
#include <intrins.h>
unsigned char flag_timer = 0;

void Timer0_Init(void)
{
		EA = 1;
		ET0 = 1;                              
    TMOD = 0x01;		
		TL0 = 25536 & 0xff;
		TH0 = 25536 >>8;
		TR0 = 1;
		 
}

void Timer0_ISR(void) interrupt 1      
{
		_push_(SFRS);
//		if (flag_timer%20>=10)
//		P15=1;
//		else  P15 = 0;
		TL0 = 25536 & 0xff;
		TH0 = 25536 >>8;
		TF0 = 0;
		flag_timer=1;
		_pop_(SFRS);
}