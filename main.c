#include "main.h"

void init_system(void);

void main()
{
		unsigned char temp = 0;
		init_system();
		while (1)
		{
//				if (flag_timer%20>=10)
//				P15=1;
//				else  P15 = 0;
					P15 = 1;
					
//					while (!flag_timer){}
//					flag_timer = 0;
//					temp++;
//					if (temp%20>=10) 
//							P15 = 1;
//					else P15 = 0;
		}
}

void init_system(void)
{
		GPIO_Init();
		Timer0_Init();
		
}
