/*
 * uart_project.c
 *
 * Created: 6/6/2025 1:54:50 PM
 * Author : ThanhHuy
 */ 

#include <avr/io.h>
#define F_CPU 7372800UL
#include <util/delay.h>
char str[]="MAN DAN\r";
int i;
//thanh ghi ucsrnA dung de dieu khien hoat dong cua module thanh usart 
void uart_char_tx(unsigned char chr){
	//check var xem udre1 co bang 1 khong,
	//neu bang 1 thi ucsr1 moi cho truyen
	while(bit_is_clear(UCSR1A,UDRE1)){};
		UDR1=chr;
}	

int main(void)
{
    /* Replace with your application code */
	//baud 115200, tan so f=8MHz
	UBRR1H = 0;
	UBRR1L = 51;
	//??t thanh ghi ucsr1a tat ca bit = 0
	//dieu nay phuc vu cho viec kiem tra bit thu 5 ( UDREn ) 
	UCSR1A=0x00;
	//ucsrB la thanh ghi trang thai va dieu khien usart
	
	UCSR1B |=(1<<TXEN1); //cho phep truyen
	
	//ucsrC thanh ghi chu yeu quy dinh khung truyen va che do truyen
	
	//chon data 8 bit
	// ucszn2 = 0, ucszn1= 11, ucszn0 = 10 => 8 bit truyen
	UCSR1C |=(1<<UCSZ11)|(1<<UCSZ10);
	
    while (1) 
    {
		for (i=0; i<15; i++){
			uart_char_tx(str[i]); //truy?n d? li?u
			_delay_ms(300);
		}
    }
}

