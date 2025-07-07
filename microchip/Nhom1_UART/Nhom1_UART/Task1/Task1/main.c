/*
 * Task1.c
 *
 * Created: 5/30/2025 3:52:06 PM
 * Author : LAPTOP
 */ 
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

int main(void){
	//Baudrate 115200, tan so f = 7372800Hz
	DDRB |=(1<<PB6);
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
    }
}

