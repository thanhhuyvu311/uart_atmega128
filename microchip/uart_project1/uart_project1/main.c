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
#define F_CPU 8000000UL
#include <avr/interrupt.h>
void uart_char_tx(unsigned chr){
	//check var xem bit udre1 co bang 1 khong 
	//1 nghia la dang trong co the truyen du lieu
	//UCSR1A = dung uart o cong PD
	while(bit_is_clear(UCSR1A,UDRE1)){};
	UDR1 = chr;
}
int main(void)
{
	
    /* Replace with your application code */
	//cau hinh uart1
	UBRR1H = 0;
	UBRR1L = 51;
	
	UCSR1A = 0x00;
	
	//cho phep nhan du lieu, truyen du lieu va ngat khi nhan xong 
	UCSR1B = (1<<RXEN1)|(1<<TXEN1)|(1<<RXCIE1);
	
	// set truyen 8 bit
	UCSR1C = (1<<UCSZ11)|(1<<UCSZ10);
	sei(); // cho phep ngat toan cuc
    while (1) 
    {
    }
}

// Interrupt Service Routine for UART1 receive
ISR(USART1_RX_vect) {
	char u_data = UDR1; // Read received data
	uart_char_tx(u_data); // Echo back the received character
}

