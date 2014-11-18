/* 
 * File:   Buttons.h
 * Author: David Tyler
 *
 * Created on November 3, 2014, 2:40 PM
 */

#ifndef BUTTONS_H
#define	BUTTONS_H

struct buttonStruct {
 char b1;
 char b2;
 char b3;
 char b4;
 char b5;
};

void init_buttons(struct buttonStruct* buttons);
void update_buttons(struct buttonStruct* buttons);
int reset_buttons(struct buttonStruct* buttons);
bit get_b1(struct buttonStruct* buttons);
bit get_b2(struct buttonStruct* buttons);
bit get_b3(struct buttonStruct* buttons);
bit get_b4(struct buttonStruct* buttons);
bit get_b5(struct buttonStruct* buttons);




#endif	/* BUTTONS_H */

