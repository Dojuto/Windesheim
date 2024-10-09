/*
 * GccApplication1.c
 *
 * Created: 08/10/2024 08:47:14
 * Author : drost
 */ 

#include <avr/io.h>


int main(void)
{
	// |= Bitje hoog
	// &=~ Bitje laag
	// ^= Toggle bit
	//PORTE.DIR |= PIN0_bm;
	PORTE.DIR |= 0b00000001;
	PORTD.DIR |= 0b00100000;
    while (1) 
    {
		
		uint8_t sw1_status = !(PORTE.IN & PIN3_bm);
		uint8_t sw2_status = !(PORTE.IN & PIN2_bm);
		uint8_t sw3_status = !(PORTE.IN & PIN1_bm);
		
		
		
		if ((sw1_status && sw2_status && !sw3_status) || (sw3_status && sw1_status &&!sw2_status) || (sw2_status && sw3_status && !sw1_status))
		{
			
			
			PORTD.OUT &=~ PIN5_bm;
		}
		else 
		{
			PORTD.OUT |= PIN5_bm;
		}
    }
}

