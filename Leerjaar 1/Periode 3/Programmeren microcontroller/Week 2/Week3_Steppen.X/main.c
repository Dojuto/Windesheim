 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.2
 *
 * @version Package Version: 3.1.2
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/
#include "mcc_generated_files/system/system.h"
#define F_CPU 4000000UL    // Klokfrequentie op 4 MHz
#include <avr/io.h>        // Voor registerdefinities
#include <avr/delay.h>

/*
    Main application
*/
int steps = 50;
const int stepDelay = 10; // Delay between steps in ms
void step1(){
    IO_PC0_SetLow(); // rood/zwart
    IO_PC1_SetHigh(); // paars/groen
    IO_PC2_SetHigh(); // grijs/blauw
    IO_PC3_SetLow(); // bruin/rood
    _delay_ms(stepDelay);
}
void step2(){
    IO_PC0_SetHigh();
    IO_PC1_SetLow();
    IO_PC2_SetHigh();
    IO_PC3_SetLow();
    _delay_ms(stepDelay);
}
void step3(){
    IO_PC0_SetHigh();
    IO_PC1_SetLow();
    IO_PC2_SetLow();
    IO_PC3_SetHigh();
    _delay_ms(stepDelay);
}
void step4(){
    IO_PC0_SetLow();
    IO_PC1_SetHigh();
    IO_PC2_SetLow();
    IO_PC3_SetHigh();
    _delay_ms(stepDelay);
}
void stopMotor() {
    IO_PC0_SetLow();
    IO_PC1_SetLow();
    IO_PC2_SetLow();
    IO_PC3_SetLow();
}
void holdMotor(){
    IO_PC0_SetHigh();
    IO_PC1_SetHigh();
    IO_PC2_SetHigh();
    IO_PC3_SetHigh();
}

int main(void)
{
    SYSTEM_Initialize();

    while(1)
    {
        for (int i=0; i <=steps; i++){
            step1();
            step2();
            step3();
            step4();
        }
        stopMotor ();
        _delay_ms (2000);
        for (int i=0; i <=steps; i++){
            step3();
            step2();
            step1();
            step4();
        }
        holdMotor();
        _delay_ms(2000);
    }    
}