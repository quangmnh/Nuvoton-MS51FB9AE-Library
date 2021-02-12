/***********************************************************/
/* GPIO Settings                                           */
/* Initiate GPIO Ports                                     */
/***********************************************************/
#include "gpio.h"

/* GPIO Init */
void GPIO_Init(void)
{
		P1M1&=0xDF;P1M2|=0x20;
}
