
#include "timer.h"
void Timer0_Init(void)
{
		ET0 = 1;
		PT0 = 1;
		clr_CKCON_T0M;                               
    TMOD |= 0x10;                                
    set_TCON_TR0;
		
		TL0 = TIMER_DIV12_VALUE_40ms &0xff;     
    TH0 = TIMER_DIV12_VALUE_40ms >>8;
		 
}