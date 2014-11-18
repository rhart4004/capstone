//Puzzle.h
// Functions to handle reading/loading of puzzle from eeprom,
// defining outputs,
#ifndef PUZZLE_H
#define PUZZLE_H

#define MAX_STATES 16 //4 outputs so 16 possible states on the output

struct puzzleStruct {
 unsigned char outputDef[MAX_STATES];
 unsigned char inputDef[MAX_STATES];
 unsigned char curState;
};

void init_puzzle(struct puzzleStruct* puzzle);
void update_puzzle(struct puzzleStruct* puzzle, struct buttonStruct* buttons);
int get_state(struct puzzleStruct* puzzle, unsigned char *output, unsigned char *input);
int advance_state(struct puzzleStruct* puzzle);
int reset_state(struct puzzleStruct* puzzle);

#endif
