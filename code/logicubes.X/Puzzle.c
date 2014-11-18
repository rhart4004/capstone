#include "Puzzle.h"
#include "Flags.h"
#include "Buttons.h"

void init_puzzle(struct puzzleStruct* puzzle) {
    //A simple puzzle that has output when the inputs are odd
    puzzle->outputDef[0] = 0b0000;
    puzzle->outputDef[1] = 0b0001;
    puzzle->outputDef[2] = 0b0010;
    puzzle->outputDef[3] = 0b0011;
    puzzle->outputDef[4] = 0b0100;
    puzzle->outputDef[5] = 0b0101;
    puzzle->outputDef[6] = 0b0110;
    puzzle->outputDef[7] = 0b0111;
    puzzle->outputDef[8] = 0b1000;
    puzzle->outputDef[9] = 0b1001;
    puzzle->outputDef[10] = 0b1010;
    puzzle->outputDef[11] = 0b1011;
    puzzle->outputDef[12] = 0b1100;
    puzzle->outputDef[13] = 0b1101;
    puzzle->outputDef[14] = 0b1110;
    puzzle->outputDef[15] = 0b1111;

    puzzle->inputDef[0] = 0b00;
    puzzle->inputDef[1] = 0b01;
    puzzle->inputDef[2] = 0b00;
    puzzle->inputDef[3] = 0b01;
    puzzle->inputDef[4] = 0b00;
    puzzle->inputDef[5] = 0b01;
    puzzle->inputDef[6] = 0b00;
    puzzle->inputDef[7] = 0b01;
    puzzle->inputDef[8] = 0b00;
    puzzle->inputDef[9] = 0b01;
    puzzle->inputDef[10] = 0b00;
    puzzle->inputDef[11] = 0b01;
    puzzle->inputDef[12] = 0b00;
    puzzle->inputDef[13] = 0b01;
    puzzle->inputDef[14] = 0b00;
    puzzle->inputDef[15] = 0b01;
    return;
}
int advance_state(struct puzzleStruct* puzzle) {
    puzzle->curState++;
    return puzzle->curState;
}

void update_puzzle(struct puzzleStruct* puzzle, struct buttonStruct* buttons) {
    if(buttons->b1)
    {
        advance_state(puzzle);
    }
    return;
}

int get_state(struct puzzleStruct* puzzle, unsigned char *output, unsigned char *input) {
    *output = puzzle->outputDef[puzzle->curState];
    *input = puzzle->inputDef[puzzle->curState];
    return puzzle->curState;
}

int reset_state(struct puzzleStruct* puzzle) {
    puzzle->curState = 0;
    return 0;
}