#include "ball.h"
#include "datos.h"
#include "paddle.h"

static Ball ball;

void ball_init() {
    ball.x=WITDTH/2;
    ball.y=HEIGHT/2;
    ball.dx=RIGHT;
    ball.dy=UP;

    // TODO: posicionar la pelota al centro y darle velocidad inicial
}

void ball_update() {
    switch(ball.dx){
        case LEFT:
            ball.x --;
        break;
        case RIGHT:
            ball.x ++;
        break;
    }

    switch(ball.dy){
        case UP:
            ball.y --;
        break;
        case DOWN:
            ball.y ++;
        break;
    }
    //COLISION CON LA PARED
    if(ball.x == 0 || ball.x == WIDTH-1){
        (ball.dx==LEFT)? ball.dx=RIGHT : ball.dx=LEFT;
    }
    //COLISION CON EL PADDLE
    if(ball.y == HEIGHT-2 && ball.x  >= paddle.x && ball.x <= paddle.x + paddle.width){
        ball.dy = UP;

    }


    //COLISION CON TECHO Y VACIO
    if(ball.y == 0){
        ball.y = DOWN;
    }
    if(ball.y == HEIGHT-1){
        ball.lives --;
        if(ball.lives==0){
            //INGRESAR GAME OVER
        }        
        ball_init()
    }

    //COLISION CON BLOQUES


    
    // TODO: mover la pelota y actualizar colisiones generales
}

Ball* ball_get() {
    return &ball;
}
