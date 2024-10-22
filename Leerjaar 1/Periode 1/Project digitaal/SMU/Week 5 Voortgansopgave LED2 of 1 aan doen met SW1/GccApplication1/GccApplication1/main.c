

#include <avr/io.h>
#include <stdbool.h>
#include <util/delay.h> 

int main(void)
{
	
	
	// Zet pin 0 van poort E als uitvoer (LED 2)
	PORTE.DIR |= PIN0_bm;

	bool last_sw2_status = false;
	bool led_state = false;

	while (1)
	{
		// Lees de status van schakelaar 2 en debounce
		bool sw2_status = !(PORTE.IN & PIN2_bm); // Activeer bij lage invoer

		// Debounce: wacht even en lees opnieuw om te controleren
		if (sw2_status)
		{
			_delay_ms(50); // Wacht 50 milliseconden
			sw2_status = !(PORTE.IN & PIN2_bm); // Lees opnieuw
		}

		if (sw2_status && !last_sw2_status) // Detecteer de stijgende flank
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

		last_sw2_status = sw2_status; // Sla de huidige status van schakelaar 2 op
	}
}