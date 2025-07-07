#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>
#include "myLCD_new.h"

#define KEYPAD_DDR DDRC
#define KEYPAD_PORT PORTC
#define KEYPAD_PIN PINC

uint8_t scan_code[4] = {0x0E, 0x0D, 0x0B, 0x07};

uint8_t ascii_code[4][4] = {{'1', '2', '3', 'A'},
							{'4', '5', '6', 'B'},
							{'7', '8', '9', 'C'},
							{'Z', '0', 'N', 'D'}};

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

int main() {
	KEYPAD_DDR = 0xF0; // PF4-PF7 output, PF0-PF3 input
	KEYPAD_PORT = 0x0F; // Pull-up cho PF0-PF3

	init_LCD();
	clr_LCD();
	
	move_LCD(1,1);
	putStr_LCD("hello");
	
	uint8_t key;
	char buffer[17] = {0}; // M?ng l?u chu?i, t?i ?a 16 ký t? + null terminator
	uint8_t index = 0; // V? trí hi?n t?i trong chu?i

while (1) {
	
	key = checkpad();
	
	if (key) {
		if (key == 'Z') { // Phím xóa ký t? cu?i (del)
			if (index > 0) {
				index--;
				buffer[index] = '\0'; // Xóa ký t? cu?i
			}
			} else if (key == 'N') { // Phím xóa toàn b? (clean)
			index = 0;
			buffer[0] = '\0';
			clr_LCD();
			} else if (index < 16) { // Thêm ký t? vào chu?i
			buffer[index] = key;
			index++;
			buffer[index] = '\0';
		}
		move_LCD(1, 1);
		printf_LCD("%s", buffer); // Hi?n th? chu?i
		_delay_ms(200); // Debounce
		// Ch? th? phím ?? tránh l?p
		while (checkpad() != 0) {
			_delay_ms(10);
		}
	}
}
return 0;
}