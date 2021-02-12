#include "main.h"

void init_system(void);

void main()
{
		unsigned char count = 0;
		unsigned char temp = 1;
		init_system();
		while (1) 
		{
				while (!TF0);
				count++;
				if (count >= 20)
				{
						count = 0;
						temp = 0;
				}
				else if (count >=10) temp = 1; 
				P15 = temp;
		}
}

void init_system(void)
{
		GPIO_Init();
		Timer0_Init();
}
