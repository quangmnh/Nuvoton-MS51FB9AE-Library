#include "main.h"

void main()
{
		GPIO_Init();
		while (1) 
		{
				P15 = 1;
				delay_ms(1000);
				P15 = 0;
				delay_ms(1000);
		}
}
		