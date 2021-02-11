

void delay_1ms()
{
		unsigned char i,j;
		for (i=0; i<0x09; i++)
				for (j=0; j<0xff; j++){}	
}

void delay_ms(unsigned char t)
{
		while (t)
		{
				delay_1ms();
				t--;
		}
}