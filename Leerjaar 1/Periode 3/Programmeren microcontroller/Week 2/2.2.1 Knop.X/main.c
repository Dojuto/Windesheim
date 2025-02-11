#define F_CPU 4000000UL    // Klokfrequentie op 4 MHz
#include <avr/io.h>        // Voor registerdefinities
#include <util/delay.h>    // Voor vertragingen

int main(void) {
    // Stel PB2 in als invoer en PB3 als uitvoer
    PORTB.DIRCLR = PIN2_bm;  // Zet PB2 als input
    PORTB.DIRSET = PIN3_bm;  // Zet PB3 als output

    // Optioneel: activeer pull-up weerstand voor PB2
    PORTB.PIN2CTRL = PORT_PULLUPEN_bm; 

    volatile int a = 0;
    
    while (1) {
        // Lees de status van PB2
        if (PORTB.IN & PIN2_bm) {  // Schakelaar is ingedrukt (PB2 is hoog)
            PORTB.OUTSET = PIN3_bm;  // Zet PB3 hoog
        } else {  // Schakelaar is niet ingedrukt (PB2 is laag)
            PORTB.OUTCLR = PIN3_bm;  // Zet PB3 laag
            a++;
        }

        _delay_ms(100);  // Voeg een kleine vertraging toe om de status te stabiliseren
    }

    return 0;  // Dit punt wordt nooit bereikt
}