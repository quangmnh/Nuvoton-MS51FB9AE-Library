/* gpio.c */
#include "gpio.h"

/* GPIO Init */
void GPIO_Init(void)
{
	/* P1.5 */
	/* Open-drain */
	P1M1 |= (1 << 5);
	P1M2 |= (1 << 5);
}
