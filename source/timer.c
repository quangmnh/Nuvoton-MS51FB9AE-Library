
#include "timer.h"

unsigned char flag_timer = 0;
unsigned int timer_cnt = 0;
unsigned int time_MUL = 1;
void Timer0_Init(void)
{
		ET0 = 1;
		
		EA = 1;                               
    TMOD |= (1<<0);		
    TR0 = 1;
		
		 
}

void Timer0_ISR(void) interrupt 1        // Vector @  0x0B
{
		flag_timer++;

}