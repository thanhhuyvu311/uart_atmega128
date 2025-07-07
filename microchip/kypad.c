/*
 * Week4.c
 *
 * Created: 03/04/2025 9:04:26 SA
 * Author : DELL
 */ 

#include <avr/io.h>
#define F_CPU 7372800UL
#include <util/delay.h>
#include "myLCD.h"
#define KEYPAD_DDR DDRC
#define KEYPAD_PORT PORTC
#define KEYPAD_PIN PINC
uint8_t scan_code[4]={0x0E, 0x0D, 0x0B, 0x07};

uint8_t ascii_code[4][4]={	'1', '2', '3', 'A',
							'4', '5', '6', 'B',
							'7', '8', '9', 'C',
							'*', '0','#','D'};
uint8_t key;
uint8_t checkpad();

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
int main() {
	KEYPAD_PORT = 0x0F;
	KEYPAD_DDR = 0xF0;

	init_LCD();
	clr_LCD();
	int i = 0;

	uint8_t key;
	uint8_t saved_keypad_value = 0;
	uint8_t eeprom_data;
	while (1) {
		key = checkpad();  // ??c keypad
		move_LCD(1, 1);
		if (key) {
			if (key == '*') {
				eeprom_write(i, saved_keypad_value);
				printf_LCD("Da luu");
				_delay_ms(2000);
				clr_LCD();
				} else if (key == '#') {
				eeprom_data = eeprom_read(i);
				putChar_LCD(eeprom_data);
				_delay_ms(1000);
				clr_LCD();
				} else {
				saved_keypad_value = key;
				putChar_LCD(saved_keypad_value); // Hi?n th? giá tr? c?a keypad trên LCD
			}
		}
	}
	return 0;
}
uint8_t checkpad() {

	uint8_t i,j,keyin;
	for(i=0;i<4;i++){
		KEYPAD_PORT=0xFF-(1<<(i+4));
		_delay_us(10);
		keyin=KEYPAD_PIN  & 0x0F;
		if(keyin!=0x0F)
		for(j=0;j<4;j++)
		if(keyin== scan_code[j]) return ascii_code[j][i];
	}
	return 0;
}

