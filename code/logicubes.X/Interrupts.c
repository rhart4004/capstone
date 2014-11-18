#include "Flags.h"
#include "Interrupts.h"
#include <xc.h>


void interrupt ISR(void) {
    if(TMR0IE && TMR0IF)
    {
        if(PORTAbits.RA1 == 0)
            flags.b1 = 1;
        if(PORTAbits.RA2 == 0)
            flags.b2 = 1;
        if(PORTAbits.RA3 == 0)
            flags.b3 = 1;
        if(PORTAbits.RA5 == 0)
            flags.b4 = 1;
        if(PORTCbits.RC0 == 0)
            flags.b5 = 1;

        TMR0IF=0;
    }
}

void setup_int(void) {
    T0CONbits.T0CS = 0;
    T0CONbits.PSA = 0;
    T0CONbits.T0PS = 0b111; //ps = 256us
    INTCONbits.T0IE = 1; //Timer0 ints on
    ei(); //enable global interrupts
}