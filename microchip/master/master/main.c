/*
 * uart_project.c
 *
 * Created: 6/6/2025 1:54:50 PM
 * Author : ThanhHuy
 */ 

#include <avr/io.h>
#define F_CPU 7372800UL
#include <util/delay.h>
///cau hinh keypad
#include "myLCD_new.h"
#define KEYPAD_DDR DDRC
#define KEYPAD_PORT PORTC
#define KEYPAD_PIN PINC
uint8_t scan_code[4]={0x0E, 0x0D, 0x0B, 0x07};
uint8_t ascii_code[4][4] = {{'1', '2', '3', 'A'},
{'4', '5', '6', 'B'},
{'7', '8', '9', 'C'},
{'N', '0', '=', 'D'}};

//thanh ghi ucsrnA dung de dieu khien hoat dong cua module thanh usart 
void uart_tx(unsigned char chr){
	//check var xem udre1 co bang 1 khong,
	//neu bang 1 thi ucsr1 moi cho truyen
	while(bit_is_clear(UCSR0A,UDRE0)){};
		UDR0 = chr;
}	
uint8_t checkpad() {
	uint8_t i, j, keyin;
	for (i = 0; i < 4; i++) {
		KEYPAD_PORT = 0xFF - (1 << (i + 4));
		_delay_us(10);
		keyin = KEYPAD_PIN & 0x0F;
		if (keyin != 0x0F) {
			for (j = 0; j < 4; j++) {
				if (keyin == scan_code[j]) {
					return ascii_code[j][i];
				}
			}
		}
	}
	return 0;
}

//cau hinh eeprom

void eeprom_write(unsigned int address, uint8_t data){
	while(bit_is_set(EECR,EEWE)){};
	EEAR = address;
	EEDR = data;
	EECR|=(1<<EEMWE);
	EECR|=(1<<EEWE);
}

unsigned char eeprom_read(unsigned int address){
	while(bit_is_set(EECR,EEWE)){};
	EEAR = address;
	EECR |=(1<<EERE);
	return EEDR;
}


int main(void)
{
    /* Replace with your application code */
	//baud 115200, tan so f=8MHz
	UBRR0H = 0;
	UBRR0L = 47;
	// Nut nhan PB
	DDRB &=~(1<<PB5);
	//dien tro keo len
	PORTB |= (1<<PB5);
	//??t thanh ghi ucsr1a tat ca bit = 0
	//dieu nay phuc vu cho viec kiem tra bit thu 5 ( UDREn ) 
	UCSR0A=0x00;
	//ucsrB la thanh ghi trang thai va dieu khien usart
	
	UCSR0B |=(1<<TXEN0); //cho phep truyen
	
	//ucsrC thanh ghi chu yeu quy dinh khung truyen va che do truyen
	
	//chon data 8 bit
	// ucszn2 = 0, ucszn1= 11, ucszn0 = 10 => 8 bit truyen
	UCSR0C |=(1<<UCSZ11)|(1<<UCSZ10);

	
	//cau hinh keypad
	KEYPAD_DDR = 0xF0; // PF4-PF7 output, PF0-PF3 input
	KEYPAD_PORT = 0x0F; // Pull-up cho PF0-PF3
	
	init_LCD();
	clr_LCD();
	int i = 0;

	uint8_t key;
	uint8_t saved_keypad_value = 0;
	uint8_t eeprom_data;
	char none_char = '\0'; 
	while (1)
	{
		key = checkpad();
		move_LCD(1,1);
		///
		if(key)
		{
			if(key == 'N'){
				_delay_us(100);
				if (key == 'N')
				{
					clr_LCD();
					eeprom_write(i,none_char);
					eeprom_data = eeprom_read(i);
					uart_tx(eeprom_data);
				}
				
			}else if (key == '=')
			{
				_delay_us(100);
				if (key == '=')
				{	
					putStr_LCD("thuc hien lenh!");
					eeprom_write(i,saved_keypad_value);
					
					
				}
			}
			else if (key == 'D')
			{
				_delay_us(100);
				move_LCD(2,1);
				if (key == 'D')
				{	
					putStr_LCD("Chuyen lenh: ");
					eeprom_data = eeprom_read(i);
					putChar_LCD(eeprom_data);
					uart_tx(eeprom_data);
				}
			}
			else{
				saved_keypad_value = key;
				putChar_LCD(saved_keypad_value);
			}
		}
	}

}

/*
    while (1)
    {
	    if(bit_is_set(PINB,5)){
		    char str = '1';
		    uart_tx(str);
	    }
	    if (bit_is_clear(PINB,5))
	    {
		    char str = '0';
		    uart_tx(str);
	    }
    }

*/

