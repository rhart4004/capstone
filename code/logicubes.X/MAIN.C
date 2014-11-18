/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Capstone logiblocks project                                          *
 *                                                                      *
 * Target Device: PIC18F47J53                                           *   
 *                                                                      *
 * By: David Tyler,                                                     *
 *     Ryan Hart,                                                       *
 *     Steven Coombes                                                   *
 *                                                                      *
 * main.c                                                               *
 *  contains init code and main loop for the PIC                        *
 *  * * * * * * * * * * * * * * * * * * * * * * * * * * * *  * * * * * */

#include <plib\i2c.h>
#include <stdint.h>        /* For uint8_t definition */
#include <stdbool.h>       /* For true/false definition */

#include "config.h"
#include "GUI.h"
#include "Puzzle.h"
#include "Buttons.h"
#include "Response.h"
#include "Interrupts.h"
#include "Outputs.h"
#include "Flags.h"
#include "Result.h"

void main(void) 
{
    struct puzzleStruct puzzle;
    struct buttonStruct buttons;
    bool result = true;
    //init code here
    setup_int();
    init_puzzle(&puzzle);
    init_buttons(&buttons);
    init_inputs();

    //Enter main loop
    for(;;) {
        //Draw GUI
        build_gui(&puzzle);
        //Handle USB
        update_puzzle(&puzzle,&buttons);
        //Set output
        set_output(&puzzle);
        //Check inputs
        update_buttons(&buttons);
        //Read result
        result = check_result(&puzzle);
    }
}