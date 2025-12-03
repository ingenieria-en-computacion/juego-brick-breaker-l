#include "paddle.h"
#include "input.h"
#include "datos.h"

static Paddle paddle;

void paddle_init() {
    int paddle_y = paddle.x;
    int paddle_x = WIDTH/2;
    // TODO: colocar el paddle centrado
}

void paddle_update(int direction) {
    int move;
    move = input_update();
    // TODO: mover el paddle según la dirección (-1 izquierda, 1 derecha)
}

Paddle* paddle_get() {
    return &paddle;
}
