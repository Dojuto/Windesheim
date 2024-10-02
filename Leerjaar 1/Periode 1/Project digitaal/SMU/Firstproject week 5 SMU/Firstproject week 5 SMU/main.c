/*
 * Firstproject week 5 SMU.c
 *
 * Created: 30/09/2024 22:19:31
 * Author : drost
 */ 

#include <avr/io.h>




int main(void)
{
	PORTE.DIR = PORTE.DIR | PIN0_bm;
    /* Replace with your application code */

    while (1) 
    {
		uint8_t sw1_status = !(PORTE.IN & PIN3_bm); 
		uint8_t sw2_status = !(PORTE.IN & PIN2_bm);
		uint8_t sw3_status = !(PORTE.IN & PIN1_bm);
		
		uint8_t led_status = sw2_status && (sw1_status||!sw3_status);
		if (led_status)
		{ PORTE.OUTSET = PIN0_bm; 
			} 
		else { PORTE.OUTCLR = PIN0_bm; 
			} 
		}
		
		
}

