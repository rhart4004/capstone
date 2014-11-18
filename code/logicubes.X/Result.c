#include "Result.h"
#include "Puzzle.h"
#include <stdbool.h>
#include <xc.h>
char check_result(struct puzzleStruct *puzzle) {
    unsigned char output;
    unsigned char input;
    //What should we have
    get_state(puzzle, &output, &input);

    //Read ADC to get actual values
    ADCON0bits.CHS0=0;
    //ADCON0=(0<<2);   //Select ADC Channel
    ADCON0bits.ADON=1;  //switch on the adc module
    ADCON0bits.GODONE=1;//Start conversion
    while(ADCON0bits.GODONE); //wait for the conversion to finish
    ADCON0bits.ADON=0;  //switch off adc

    //unconnected
    if(ADRES>=adc_range[0][0] && ADRES<=adc_range[0][1])
        return false;
    //Both inputs 0
    if(ADRES>=adc_range[1][0] && ADRES<=adc_range[1][1])
        return 0b00 == input;
    //Inputs 01
    if(ADRES>=adc_range[2][0] && ADRES<=adc_range[2][1])
        return 0b01 == input;
    //Inputs 10
    if(ADRES>=adc_range[3][0] && ADRES<=adc_range[3][1])
        return 0b10 == input;
    //Inputs 11
    if(ADRES>=adc_range[4][0] && ADRES<=adc_range[4][1])
        return 0b11 == input;

    //Error
    return false;
}

void init_inputs(void)
{
    ADCON1=0b10001010;
}