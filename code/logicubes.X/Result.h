/* 
 * File:   Result.h
 * Author: 16499
 *
 * Created on November 17, 2014, 3:48 PM
 */

#ifndef RESULT_H
#define	RESULT_H
#include <stdbool.h>

char check_result(struct puzzleStruct *puzzle);
void init_inputs(void);

static int adc_range[5][2] = {{0,200} , {201,400} , {401,600}, {601,800}, {801,1024}};

#endif	/* RESULT_H */