#include "mcc_generated_files/system/system.h"
#include <avr/delay.h>
volatile static int uart_flag = 0;

char uart_receive_char(void) {
    while (!(USART2.STATUS & USART_RXCIF_bm)) {   //Communicatie ontvangen
        // Wachten op een karakter
    }
    uart_flag = 1;
    return USART2.RXDATAL;
}

void uart_send_string(const char* str) {
    while (*str) {
        while (!(USART2.STATUS & USART_DREIF_bm)) { //Communicatie sturen
            // Wacht tot de data register leeg is
        }
        USART2.TXDATAL = *str;
        str++;
    }
}
// Functie om de servo-status op te halen (Interrupt Safe)

typedef enum {
    s_sleep, s_fles_remove, s_band, s_servo, s_brug, s_stop
} states;



typedef enum {
    IO_PRESS_bakje, IO_noInput, IO_start, IO_Schuif, IO_fles_release_pos, IO_AGV_pos, IO_AGV_recive, IO_Bakje_rotated
} events;

typedef enum {
    F_ACTIVITY, F_ENTRY, F_EXIT
} currentFlow;
// Initialiseer de huidige state en event
states currentState = s_sleep;
events currentEvent = IO_noInput;
states nextState = s_sleep;
// Hoofdprogramma

void setEvent(events newEvent) {
    currentEvent = newEvent;
} // Set current Event naar new Event

void resetEvent() {
    currentEvent = IO_noInput;
} // Reset current Event naar NOPRESS



// Interrupt handler zonder globale variabele

void sw_servo_interrupthandler(void) {
    setEvent(IO_PRESS_bakje);
}

int main(void) {
    SYSTEM_Initialize();
    sw_servo_SetInterruptHandler(sw_servo_interrupthandler);

    while (1) {
        case s_sleep:
            switch (currentEvent) {
            case IO_AGV_pos:
                nextState = s_fles_remove;
                resetEvent();
                break;
            }
            switch (currentFlow) {
            case F_ENTRY:
                TCA1_SPLIT_CTRLB = 0b00000000; // reset all dc motrs all motor/ 0x0 = 0ff 0x1 = com 1 aan 0x2=com2 ox3 = com 1 en 2 aan enz.. 

                // Entry Action, 1x uitgevoerd
                currentFlow = F_ACTIVITY;
                // Geen break, we voeren activity direct uit.

            case F_ACTIVITY:

                // State activity, elke iteratie uitgevoerd
                if (nextState == currentState) {
                    break;
                }
                else {
                    currentFlow = F_EXIT;
                    // Geen break, ga gelijk door naar F_EXIT.
                }

            case F_EXIT:

                // Exit activity, 1x uitgevoerd
                currentFlow = F_ENTRY; // Reset state flow.
                break;
            }
            resetEvent();
            break;
            //s_fles_remove                

           
        case s_fles_remove:
            switch (currentEvent) {
            case IO_Schuif:
                nextState = s_band;
                resetEvent();
                break;
            }
            switch (currentFlow) {
            case F_ENTRY:
                TCA1_SPLIT_CTRLB |= 0b00000001; // zet dc0 aan lingsom aan
                TCA1_SPLIT_LCMP0 = 153; // stel snelheid is 0-255
                // Entry Action, 1x uitgevoerd
                currentFlow = F_ACTIVITY;
                // Geen break, we voeren activity direct uit.

            case F_ACTIVITY:

                // State activity, elke iteratie uitgevoerd
                if (nextState == currentState) {
                    break;
                }
                else {
                    currentFlow = F_EXIT;
                    // Geen break, ga gelijk door naar F_EXIT.
                }

            case F_EXIT:
                TCA1_SPLIT_CTRLB &= ~0b00000001; // zet dc 0 uit 
                // Exit activity, 1x uitgevoerd
                currentFlow = F_ENTRY; // Reset state flow.
                break;
            }
            resetEvent();
            break;


            //s_band                

            //s_band
        case s_band:
            switch (currentEvent) {
            case IO_PRESS_bakje:
                nextState = s_servo;
                resetEvent();
                break;
            }
            switch (currentFlow) {
            case F_ENTRY:
                TCA1_SPLIT_CTRLB |= 0b00000100; // zet motor 2 aan lingsom 
                TCA1_SPLIT_LCMP0 = 20; // stel snelheid is 0-255
                // Entry Action, 1x uitgevoerd
                currentFlow = F_ACTIVITY;
                // Geen break, we voeren activity direct uit.

            case F_ACTIVITY:
                // State activity, elke iteratie uitgevoerd
                if (nextState == currentState) {
                    break;
                }
                else {
                    currentFlow = F_EXIT;
                    // Geen break, ga gelijk door naar F_EXIT.
                }

            case F_EXIT:
                TCA1_SPLIT_CTRLB &= ~0b00000100;
                // Exit activity, 1x uitgevoerd
                currentFlow = F_ENTRY; // Reset state flow.
                break;
            }
            resetEvent();
            break;


            //s_servo                

            //s_servo

        case s_servo:
            switch (currentEvent) {
            case Bakje_rotated:
                nextState = s_brug;
                resetEvent();
                break;
            }
            switch (currentFlow) {
            case F_ENTRY:
                for (int cmp = TCA0.SINGLE.CMP0; cmp <= 665; cmp += 5) { // Verhoog in stappen van 10
                    TCA0.SINGLE.CMP0 = cmp;
                    _delay_ms(50);
                }
                currentFlow = F_ACTIVITY;
                // Geen break, we voeren activity direct uit.

            case F_ACTIVITY:
                TCA0.SINGLE.CMP0 = 665;
                currentEvent = Bakje_rotated;
                // State activity, elke iteratie uitgevoerd
                if (nextState == currentState) {
                    break;
                }
                else {
                    currentFlow = F_EXIT;
                    // Geen break, ga gelijk door naar F_EXIT.
                }

            case F_EXIT:
                // Exit activity, 1x uitgevoerd
                currentFlow = F_ENTRY; // Reset state flow.
                break;
            }
            //brug                

            //brug
        case s_brug:
            switch (currentEvent) {
            case IO_AGV_recive:
                nextState = s_stop;
                resetEvent();
                break;
            case IO_fles_release_pos: // klep open
                TCA1_SPLIT_CTRLB &= ~0b00010000 // zet dc2 uit lingsom 
                    resetEvent();
                break;
            }
            switch (currentFlow) {
            case F_ENTRY:
                TCA1_SPLIT_CTRLB |= 0b00010000; // zet dc2 aan lingsom 
                TCA1_SPLIT_LCMP0 = 153; // stel snelheid is 0-255
                currentFlow = F_ACTIVITY;
                // Geen break, we voeren activity direct uit.

            case F_ACTIVITY:
                if
                    // State activity, elke iteratie uitgevoerd
                    if (nextState == currentState) {
                        break;
                    }
                    else {
                        currentFlow = F_EXIT;
                        // Geen break, ga gelijk door naar F_EXIT.
                    }

            case F_EXIT:
                TCA1_SPLIT_CTRLB = 0x0; //Alle DC motoren uit (savety)
                // Exit activity, 1x uitgevoerd
                currentFlow = F_ENTRY; // Reset state flow.
                break;
            }
            resetEvent();
            break;
            currentState = nextState;
            _delay_ms(100);

            while (uart_flag) {
                char receivedChar = uart_receive_char(); // Ontvang karakter
                uart_flag = 0;
                switch (receivedChar) {
                case '1':
                    currentEvent = IO_start;
                    break;
                case '2':
                    currentEvent = IO_AGV_pos;
                    break;
                case '3':
                    currentEvent = IO_AGV_recive
                        break;
                case '4':
                    // word uitgevoerd bij signaal 4
                    break;
                default:
                    // Word uitgevoerd als er een ander signaal binnenkomt
                    // Word alleen gebruikt voor debugging dus laat maar leeg
                    break;
                }
            }
    }






