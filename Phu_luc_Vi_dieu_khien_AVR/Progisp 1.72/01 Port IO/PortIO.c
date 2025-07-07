
// Port IO Example

#include <avr/io.h>

// Input Port pin SWITCH_IP
#define PORT_SWITCH_IP  PORTB
#define DDR_SWITCH_IP   DDRB
#define PIN_SWITCH_IP   PINB
#define BIT_SWITCH_IP   5

// Output Port pin LED_O
#define PORT_LED_O      PORTB
#define DDR_LED_O       DDRB
#define BIT_LED_O       6

 void Init_IO(void){
	// Set LED_O as output pin
	DDR_LED_O |= (1<<BIT_LED_O);

	// Set SWITCH_IP as input pin
	DDR_SWITCH_IP &= ~(1<<BIT_SWITCH_IP);

	// Enable pull-up on SWITCH_IP
	PORT_SWITCH_IP |= (1<<BIT_SWITCH_IP);


 }
int main(void)
{
 Init_IO();

    // Repeat indefinitely
    for(;;)
    {
        // See if switch is pressed
        if((PIN_SWITCH_IP&(1<<BIT_SWITCH_IP)) == 0)
        {
            // Enable LED
            PORT_LED_O |= (1<<BIT_LED_O);
        }
        else
        {
            // Disable LED
            PORT_LED_O &= ~(1<<BIT_LED_O);
        }
    }
}


