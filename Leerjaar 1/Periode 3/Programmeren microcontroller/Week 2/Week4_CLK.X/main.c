#include "mcc_generated_files/system/system.h"
#define F_CPU 4000000UL 

/*
    Main application
*/
volatile unsigned int a = 0;
int main(void)
{
    SYSTEM_Initialize();

    while(1)
    {
        a++;
        if (a >= 40000){
            a = 0;
            LED0_Toggle();
        }
    }    
}