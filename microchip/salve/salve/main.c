/*
 * uart_project1.c
 *
 * Created: 6/6/2025 3:19:17 PM
 * Author : ThanhHuy
 */
/*
Baud 4800
8 bit data
1 stop bit 
no parity bit
*/
#include <avr/io.h>
#define F_CPU 7372800UL
#include <avr/interrupt.h>

int main(void)
{
	
	
    /* Replace with your application code */
	
	
	
	//cau hinh uart1
	UBRR0H = 0;
	UBRR0L = 47;
	
	UCSR0A = 0x00;
	
	//cho phep nhan du lieu, truyen du lieu va ngat khi nhan xong 
	UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0);
	
	// set truyen 8 bit
	UCSR0C = (1<<UCSZ01)|(1<<UCSZ00);
	// C?u hình chân PB6,PB7 là OUTPUT ?? ?i?u khi?n LED,buzzer
	DDRB |= (1<<PB6)|(1<<PB7);
	sei(); // cho phep ngat toan cuc
    while (1) 
    {
    }
}

// Interrupt Service Routine for UART1 receive
ISR(USART0_RX_vect) {
	unsigned char u_data = UDR0; // Read received data
	if (u_data == '0') {
		PORTB |= (1<<PB6); // B?t LED
		TCCR1B &= ~((1 << CS12) | (1 << CS11) | (1 << CS10)); // Stop Timer1 (clear prescaler)
		TIMSK &=~(1<<TOIE1);
		PORTB &=~(1<<PB7);
		} else if (u_data == '1' || u_data == '\0') { // Thêm ?i?u ki?n cho '0' ?? t?t LED
		PORTB &= ~(1<<PB6); // T?t LED
		TCCR1B &= ~((1 << CS12) | (1 << CS11) | (1 << CS10)); // Stop Timer1 (clear prescaler)
		TIMSK &=~(1<<TOIE1);
		PORTB &=~(1<<PB7);
	}else{
		//SU DUNG TIMER  THANH 16BIT
		TCCR1B |=(1<<CS12)|(1<<CS10); //chia t?n 1024
		TCNT1 = 0xC7C0;
		TIMSK |=(1<<TOIE1); // cho phép ng?t tràn.
	}
}
ISR(TIMER1_OVF_vect){
	TCNT1 = 0xC7C;
	PORTB ^= 128; // 1000 000
}
/************************************************************************/
/*	TÍNH GIÁ TR? CHO TIMER 
	F_CPU = 7372800
	Chia t?n 1024 =>   7372800 / 1024 =  7200
	
	Mong mu?n c? 2s buzzer s? kêu 1 l?n 
	7200 * 2 = 14400
	65536 - 14400 = 51.136  (C7C0)                                                   */
/************************************************************************/