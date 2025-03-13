#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 4000000UL 

// Definieer de pinnen waarop de stappenmotor is aangesloten
#define COIL_A1_PIN 0   // Spoel A1 aangesloten op pin 0 (bijv. PA0)
#define COIL_A2_PIN 1   // Spoel A2 aangesloten op pin 1 (bijv. PA1)
#define COIL_B1_PIN 2   // Spoel B1 aangesloten op pin 2 (bijv. PA2)
#define COIL_B2_PIN 3   // Spoel B2 aangesloten op pin 3 (bijv. PA3)

void setup() {
    // Stel de pinnen in als uitgang (controleer de poort op basis van je aansluitingen)
    // Dit gaat ervan uit dat de stappenmotor is aangesloten op poort A (PA0 tot PA3)
    // De DDR-registers regelen de richting (output = 1)
    PORTA.DIRSET = (1 << COIL_A1_PIN) | (1 << COIL_A2_PIN) | (1 << COIL_B1_PIN) | (1 << COIL_B2_PIN); 
}

void stepClockwise() {
    // Draai 1 stap in de klokrichting
    PORTA.OUTSET = (1 << COIL_A1_PIN);  // Zet A1 aan
    PORTA.OUTCLR = (1 << COIL_A2_PIN);  // Zet A2 uit
    PORTA.OUTSET = (1 << COIL_B1_PIN);  // Zet B1 aan
    PORTA.OUTCLR = (1 << COIL_B2_PIN);  // Zet B2 uit
    _delay_ms(10);  // Kleine vertraging voor stabiliteit

    PORTA.OUTCLR = (1 << COIL_A1_PIN);  // Zet A1 uit
    PORTA.OUTSET = (1 << COIL_A2_PIN);  // Zet A2 aan
    PORTA.OUTSET = (1 << COIL_B1_PIN);  // Zet B1 aan
    PORTA.OUTCLR = (1 << COIL_B2_PIN);  // Zet B2 uit
    _delay_ms(10);

    PORTA.OUTCLR = (1 << COIL_A1_PIN);  // Zet A1 uit
    PORTA.OUTSET = (1 << COIL_A2_PIN);  // Zet A2 aan
    PORTA.OUTCLR = (1 << COIL_B1_PIN);  // Zet B1 uit
    PORTA.OUTSET = (1 << COIL_B2_PIN);  // Zet B2 aan
    _delay_ms(10);

    PORTA.OUTSET = (1 << COIL_A1_PIN);  // Zet A1 aan
    PORTA.OUTCLR = (1 << COIL_A2_PIN);  // Zet A2 uit
    PORTA.OUTCLR = (1 << COIL_B1_PIN);  // Zet B1 uit
    PORTA.OUTSET = (1 << COIL_B2_PIN);  // Zet B2 aan
    _delay_ms(10);
}

int main(void) {
    setup();

    while (1) {
        // Draai de motor permanent in de klokrichting
        stepClockwise();
    }

    return 0;
}