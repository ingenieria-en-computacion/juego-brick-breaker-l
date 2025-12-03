#include "paddle.h"
#include "input.h"
#include "datos.h"

static Paddle paddle;
int paddle_x;
void paddle_init() {
    int paddle_y = paddle.x;
    paddle_x = WIDTH/2;
    // TODO: colocar el paddle centrado
}

void paddle_update(int direction) {
    int move;
    move = input_update();
    switch(move){
        case 0:
            return;
        break;

        case 1:
            paddle_x ++;
        break;

        case -1:
            paddle_x --;
        break;
    }
    // TODO: mover el paddle según la dirección (-1 izquierda, 1 derecha)
}

Paddle* paddle_get() {
    return &paddle;
}
