#include <stdio.h>

int main (){

    float coordenada_x;
    float *ponteiro_x = &coordenada_x;

    printf("Digite a coordenada 'x': ");
    scanf("%f", &coordenada_x);

    printf("Posicao do portal no eixo X: [%f]\n", coordenada_x);
    printf("Endereco do portal para teletransporte: [%p]\n", ponteiro_x);

    return 0;
}
