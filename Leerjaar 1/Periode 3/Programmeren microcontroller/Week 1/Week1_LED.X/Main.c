#define F_CPU (4000000UL)  // Stel de klokfrequentie in op 4 MHz
#include <avr/io.h>         // Voor registerdefinities
#include <util/delay.h>     // Voor vertragingen

int main(void) {
    // Zet de pinnen als uitvoer
    PORTB.DIRSET = PIN3_bm;  // Zet PB3 als uitvoer
    PORTD.DIRSET = PIN5_bm;  // Zet PD5 als uitvoer
    PORTE.DIRSET = PIN0_bm;  // Zet PE0 als uitvoer

    while (1) {
        // Zet de LEDs aan (PB3, PD5 en PE0 hoog)
        PORTB.OUTSET = PIN3_bm;  // Zet PB3 hoog (5V), LED aan
        PORTD.OUTSET = PIN5_bm;  // Zet PD5 hoog (5V), LED aan
        PORTE.OUTCLR = PIN0_bm;  // Zet PE0 hoog (5V), LED aan
        
        _delay_ms(1000);  // Wacht 1 seconde

        // Zet de LEDs uit (PB3, PD5 en PE0 laag)
        PORTB.OUTCLR = PIN3_bm;  // Zet PB3 laag (0V), LED uit
        PORTD.OUTCLR = PIN5_bm;  // Zet PD5 laag (0V), LED uit
        PORTE.OUTSET = PIN0_bm;  // Zet PE0 laag (0V), LED uit
        _delay_ms(1000);  // Wacht 1 seconde
    }

    return 0;  // Dit wordt nooit bereikt
}