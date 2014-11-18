#include "Outputs.h"
#include "Puzzle.h"
#include <xc.h>

int set_output(struct puzzleStruct* puzzle) {
    unsigned char output;
    unsigned char input;

    get_state(puzzle, &output, &input);

    LATBbits.LB3 = output & 0b1000;
    LATBbits.LB2 = output & 0b0100;
    LATBbits.LB1 = output & 0b0010;
    LATBbits.LB0 = output & 0b0001;
}
