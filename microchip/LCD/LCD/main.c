/*
 * LCD.c
 *
 * Created: 7/3/2025 8:28:37 PM
 * Author : thanh
 */ 
#define F_CPU 7372800UL
#include <avr/io.h>
#include <util/delay.h>
#include "myLCD_new.h"

int main(void)
{
	DDRF = 0xFF;
	
	
    /* Replace with your application code */
	init_LCD();
	clr_LCD();
    while (1) 
    {
		
		//putStr_LCD("Xin Chao");
		/**`
		move_LCD(1,1);
		putStr_LCD("LCD Display");
		_delay_ms(500);
		**/
		PORTF = 0xFF;
		_delay_ms(1000);
		PORTF &=~ 0xF0;
		_delay_ms(1000);
		
		
		
    }
}

