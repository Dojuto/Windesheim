/*
 * Week 5 labopgave 3.c
 *
 * Created: 01/10/2024 10:37:05
 * Author : drost
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	PORTE.DIR = PORTE.DIR |= PIN0_bm;
    /* Replace with your application code */
    while (1) 
    {
		PORTE.OUTTGL = PIN0_bm;
		_delay_ms(2000);
		
    }
}

