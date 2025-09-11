#include <stdio.h>

typedef struct{
    int pontos;
    float pos_x;
    float pos_y;
} coletavel;


int main (){

    coletavel gema_rara;

    printf("Insira quantos pontos vale a gema rara: ");
    scanf("%d", &gema_rara.pontos);
    printf("Insira a posição X: ");
    scanf("%f", &gema_rara.pos_x);
    printf("Insira a posição Y: ");
    scanf("%f", &gema_rara.pos_y);

    printf("Coletável criado!\nValor: %d pontos\nPosição: (X = %.1f, Y = %.1f)", gema_rara.pontos, gema_rara.pos_x, gema_rara.pos_y);

    return 0;
}
