#include "render.h"
#include "ball.h"
#include "paddle.h"
#include "brick.h"
#include "datos.h"
#include <stdio.h>

void render_frame() {
    
    system("cls");
    for(int i=0; i<HEIGHT; i++){
        for(int j=0; j<WIDTH; j++){
            if(i==0 || j==0 || j==WIDTH-1){
                printf("#");
                continue;
            }
            if(i==HEIGHT-2 && j==paddle.x){
                for(int w=0;w<paddle.width; w++){
                    printf("=");
                    j++;
                }

            }
            if(i>0 && i<6){
                printf("[]");
                j++;

            }
            if(i==ball.x && j==ball.y){
                printf("O");
            }

        }
    }

    // TODO:
    // 1. limpiar pantalla
    // 2. dibujar ladrillos
    // 3. dibujar pelota
    // 4. dibujar paddle
    // 5. mostrar puntaje y vidas
}
