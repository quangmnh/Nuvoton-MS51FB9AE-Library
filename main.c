#include "main.h"

void init_system(void);

void main()
{
		unsigned char temp = 1;
		init_system();
		
		while (1) 
		{


//				if (flag_timer >= 200)
//				{
//						flag_timer = 0;
//						temp = 0;
//				}
//				else if (flag_timer >=100) temp = 1; 
				P15 = 1;
		}
}

void init_system(void)
{
		GPIO_Init();
		Timer0_Init();
}
