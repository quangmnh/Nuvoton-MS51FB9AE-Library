

void delay_1ms()
{
		uint8_t i,j;
		for (i=0; i<0x09; i++)
				for (j=0; j<0xff; j++){}	
}

void delay_ms(uint8_t t)
{
		while (t)
		{
				delay_1ms();
				t--;
		}
}