
#include "mcc_generated_files/system/system.h"
#include <util/delay.h>
#include <avr/sleep.h>

/*
    Main application
*/
volatile int a = 0;
ISR(interrupt_vector){
    
}
void switch_interrupthandler(){
    PORTB.OUTTGL = PIN3_bm;
    a++;
}

int main(void)
{
    SYSTEM_Initialize();
    SW0_SetInterruptHandler(switch_interrupthandler);

    while(1)
    {
        sleep_mode();
        a++;
        
        
          
        
            
        
    }    
}