/*
 * Week 5 labopgave 3.c
 *
 * Created: 01/10/2024 10:37:05
 * Author : drost
 */ 
#define F_CPU4000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>


int main(void)
{
	bool last_sw2_status = false;
	bool led_state = false;
	PORTE.DIR = PORTE.DIR |= PIN0_bm;
    /* Replace with your application code */
    while (1) 
    {
		PORTE.OUTTGL = PIN0_bm;
		_delay_ms(50);
		led_state = !led_state; // Wissel de toestand van de LED
		if (led_state)
		{
			
			PORTE.OUT |= PIN0_bm; // Zet de LED aan
			_delay_ms(200);
			
		}
		else
		{
			PORTE.OUT &= ~PIN0_bm; // Zet de LED uit
		}
		
    }
}


