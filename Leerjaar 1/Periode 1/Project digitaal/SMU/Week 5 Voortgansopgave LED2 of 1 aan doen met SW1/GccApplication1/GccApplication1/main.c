#include <avr/io.h>
#include <stdbool.h>

int main(void)
{
	// |= Bitje hoog
	// &=~ Bitje laag
	// ^= Toggle bit
	//PORTE.DIR |= PIN0_bm;
	PORTE.DIR &= ~(0b00001110); // Zet pinnen 1, 2, 3 als invoer wordt automatisch al gedaan
	//PORTD.DIR |= 0b00100000; // Zet pin 5 als uitvoer Led 1
	PORTE.DIR |= 0b00000001; // Zet pin 0 als uitvoer Led 2

	bool last_sw1_status = false;
	bool led_state = false;

	while (1)
	{
		uint8_t sw1_status = !(PORTE.IN & PIN3_bm); // Lees de status van schakelaar 1

		if (sw1_status && !last_sw1_status) // Detecteer de stijgende flank
		{
			led_state = !led_state; // Wissel de toestand van de LED
			if (led_state)
			{
				PORTE.OUT |= PIN0_bm; // Zet de LED aan
			}
			else
			{
				PORTE.OUT &= ~PIN0_bm; // Zet de LED uit
			}
		}

		last_sw1_status = sw1_status; // Sla de huidige status van schakelaar 1 op
	}
}