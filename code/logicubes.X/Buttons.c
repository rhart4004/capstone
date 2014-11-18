#include "Buttons.h"
#include "Flags.h"

void init_buttons(struct buttonStruct* buttons) {
    buttons->b1 = 0;
    buttons->b2 = 0;
    buttons->b3 = 0;
    buttons->b4 = 0;
    buttons->b5 = 0;

    return;
}
void update_buttons(struct buttonStruct* buttons) {
    buttons->b1 = flags.b1;
    buttons->b2 = flags.b2;
    buttons->b3 = flags.b3;
    buttons->b4 = flags.b4;
    buttons->b5 = flags.b5;

    return;
}
int reset_buttons(struct buttonStruct* buttons) {
    init_buttons(buttons);

    return 0;
}
bit get_b1(struct buttonStruct* buttons) {
    return buttons->b1;
}
bit get_b2(struct buttonStruct* buttons) {
    return buttons->b2;
}
bit get_b3(struct buttonStruct* buttons) {
    return buttons->b3;
}
bit get_b4(struct buttonStruct* buttons) {
    return buttons->b4;
}
bit get_b5(struct buttonStruct* buttons) {
    return buttons->b5;
}
