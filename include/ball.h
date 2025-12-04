#ifndef BALL_H
#define BALL_H

typedef struct {
    int x, y;       // Posición
    int dx, dy;     // Dirección
    int lives;      // vidas
} Ball;

void ball_init();
void ball_update();

// Devuelve un puntero a la pelota global
Ball* ball_get();

#endif

