
#include "mcc_generated_files/system/system.h"
#include <util/delay.h>
/*
    Main application
*/
unsigned int a = 0;
int main(void)
{
    SYSTEM_Initialize();

    while(1)
    {
        a++;
        TCA0_SPLIT_HCMP0 = a % 255;
        _delay_ms(10);
    }    
}