
#include "timer.h"
#include <intrins.h>
unsigned char flag_timer = 0;

void Timer0_Init(void)
{
		ET0 = 1;                              
    TMOD |= (1<<0);		
    TR0 = 1;
		TL0 = TIMER_DIV12_VALUE_40ms & 0xff;
		TH0 = TIMER_DIV12_VALUE_40ms >>8;
		 
}

void Timer0_ISR(void) interrupt 1      
{
    _push_(SFRS);
		flag_timer++;
		clr_TCON_TF0;
		_pop_(SFRS);
}