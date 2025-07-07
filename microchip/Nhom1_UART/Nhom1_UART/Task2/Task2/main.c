#define  F_CPU 7372800UL
#include <util/delay.h>
#include <avr/interrupt.h>
#include "myLCD_new.h"
#include <stdio.h>
#include <avr/io.h>

volatile unsigned char u_data;


//=================================================================
void lcd_output(unsigned char arr){
	/*
	Hien ky tu ra LCD
	*/
	clr_LCD();
	move_LCD(1, 1);
	putChar_LCD(arr);
}

//===================================================================
ISR(USART0_RX_vect){
	u_data = UDR0;
	lcd_output(u_data);
}
//==================================================================
int main(void){
	DDRB |=(1<<PB6)|(1<<PB7);
	PORTB |= (1<<PB7);
	
	//Baudrate 115200, tan so f = 7372800Hz
	UBRR0H = 0;
	UBRR0L = 3;
	
	UCSR0A = 0x00;
	UCSR0B |= (1<<TXEN0)|(1<<RXEN0)|(1<<RXCIE0); //Cho phep chuyen nhan
	
	//Chon data 8bit
	UCSR0C |= (1<<UCSZ01)|(1<<UCSZ00);		//bat dong bo, stop bit, chon bit 1
	
	init_LCD();
	clr_LCD();
	sei();
	
    while (1) {
		switch(u_data){
			case 'a':
				PORTB ^= 64;				//toggle led
				PORTB |= (1<<PB7);			//Tat chuong
				break;
				
			case 'b':
				PORTB ^= 128;				//toggle buzzer
				PORTB &= ~(1<<PB6);			//Tat led
				break;
				
			default:	//Neu khac 'a' va 'b'
				PORTB &= ~(1<<PB6);			//Tat led
				PORTB |= (1<<PB7);			//Tat chuong do dao
				break;
		}
		_delay_ms(500);
		
    }
}

