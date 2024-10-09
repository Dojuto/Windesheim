/*
 * Week 5 opgave 4D.c
 *
 * Created: 01/10/2024 12:01:45
 * Author : drost
 */ 

#include <avr/io.h>


int main(void)
{
	//PORTA.DIRSET = 0100000001
	//PORTA.DIR |= 
	PORTA.DIR = PORTA.DIR | 0xF0;
	PORTF.DIR = PORTF.DIR | 0x0C;

	while (1)
	{
		uint8_t sw1_status = !(PORTE.IN & PIN3_bm);
		uint8_t sw2_status = !(PORTE.IN & PIN2_bm);
		uint8_t sw3_status = !(PORTE.IN & PIN1_bm);
		PORTF.OUTSET = PIN3_bm;
		
		
		

		// EEN KNOP
		if (sw1_status && !sw2_status && !sw3_status || sw2_status && !sw1_status && !sw3_status|| sw3_status && !sw1_status && !sw2_status)
		{
			if (PORTA.OUTSET != 0x10)
			{
				PORTA.OUTCLR = 0xFF;
				PORTA.OUTSET = 0x10;
			}
		}
		
		//TWEE KNOPPEN
		else if ((sw1_status && sw2_status && !sw3_status) || (sw3_status && sw1_status &&!sw2_status) || (sw2_status && sw3_status && !sw1_status))
		{
			if (PORTA.OUTSET != 0x20)
			{
				PORTA.OUTCLR = 0xFF;
				PORTA.OUTSET = 0x20;
			}
			
		}
		
		//DRIE KNOPPEN
		else if (sw1_status && sw2_status && sw3_status)
		{	
			if (PORTA.OUTSET != 0x30)
			{
				PORTA.OUTCLR = 0xFF;
				PORTA.OUTSET = 0x30;
			}
			
		}
		else {
			if (PORTA.OUTSET != 0x0)
			{
				PORTA.OUTCLR = 0xFF;
				PORTA.OUTSET = 0x0;
			}
			
		}
		
	}
}

