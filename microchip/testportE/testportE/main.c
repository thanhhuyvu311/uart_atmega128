/*
 * testportE.c
 *
 * Created: 6/23/2025 10:34:40 AM
 * Author : ThanhHuy
 */ 

#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>

int main(void)
{
	DDRE |=(1 << PE0)|(1 << PE1);
	while (1)
	{
		   PORTE |=(1 << PE0);
		   PORTE &=~(1 << PE1);
		   _delay_ms(3000);
		   PORTE &=~(1 << PE0);
		   PORTE |=(1 << PE1);
		   _delay_ms(3000);
		   
		   
	}

}

