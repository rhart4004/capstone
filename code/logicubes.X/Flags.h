/* 
 * File:   Flags.h
 * Author: David Tyler
 *
 * Created on November 3, 2014, 5:39 PM
 */

#ifndef FLAGS_H
#define	FLAGS_H

#include <stdbool.h>

typedef struct {
 char b1 : 1;
 char b2 : 1;
 char b3 : 1;
 char b4 : 1;
 char b5 : 1;
} t_flags;

t_flags flags;

void clear_flags();

#endif	/* FLAGS_H */

