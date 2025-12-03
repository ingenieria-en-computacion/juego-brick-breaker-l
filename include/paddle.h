#ifndef PADDLE_H
#define PADDLE_H

typedef struct {
    int y = 9;      // posición del centro
    int width= 7;
} Paddle;

void paddle_init();
void paddle_update(int direction);

Paddle* paddle_get();

#endif
