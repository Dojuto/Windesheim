/*
 * Week 5 Labopgave 4.c
 *
 * Created: 01/10/2024 10:58:43
 * Author : drost
 */ 

#include <avr/io.h>



int main(void)
{
	PORTA.DIR = PORTA.DIR | 0xF0;
	PORTF.DIR = PORTF.DIR | 0x0C; 
    
    while (1) 
    {
		PORTF.OUTSET = PIN3_bm;
		PORTA.OUTSET = 0x30;
	}
}

