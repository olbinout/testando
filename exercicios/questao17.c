#include <stdio.h>

int main (){

    int mapa_fase1[5][8] = {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 2, 0, 1, 1},
    {0, 0, 1, 1, 0, 1, 0, 0},
    {1, 1, 1, 1, 2, 2, 1, 1}
    };

    for(int l = 0; l < 5; l++){
        for (int c = 0; c < 8; c++){
            if (mapa_fase1[l][c] == 2){
                printf("Espinho encontrado na linha %d e coluna %d\n", l, c);
            }
        }
    }

    return 0;
}
