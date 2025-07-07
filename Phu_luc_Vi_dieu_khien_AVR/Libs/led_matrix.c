/*
 * cau3_2.c
 *
 * Created: 4/6/2021 7:35:43 AM
 * Author : NCN
 */ 

#define F_CPU 1000000UL 
#include <avr/io.h>
#include <util/delay.h>
#include <avr/dotfont.h>


#define CTRL_PORT 	PORTD //PORTC is connected to control lines of DotMatrix
#define CTRL_DDR	DDRD

#define DATA_PORT 	PORTE //PORTD is connected to the data bus of DotMatrix
#define DATA_DDR	DDRE


typedef unsigned char Byte;

void DOTputChar57(char chr){
	unsigned char line=1, i;
	int tchr=chr;
	for(i=0;i<5;i++) {
		CTRL_PORT=line; 
		DATA_PORT=~pgm_read_byte(&font7x5[((tchr - 32) * 5) + i]);
		line <<=1;
		_delay_us(1000);
	}
}

int main(void)
{
	unsigned char a[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	unsigned char i,j;

	DATA_DDR=0xFF; 
	CTRL_DDR=0xFF;

	while(1){
		for (i=0;i<16;i++)
		{
			for(j = 0; j < 200; j++) 
			{
				DOTputChar57(a[i]);
				
			}
			
		}
	};
	
	// DOTputChar57('1');
	
	//};
}

