#include <stdio.h>

int main (){

    int vida_jogador = 100;
    int *ponteiro_vida;

    printf("Vida do personagem antes de tomar dano: %d\n", vida_jogador);

    vida_jogador = 50;
    printf("Vida do jogador após tomar dano: %d\n", vida_jogador);

    ponteiro_vida = &vida_jogador;

    *ponteiro_vida = 100;

    printf("O jogador coletou um power-up, agora sua vida está em %d\n", vida_jogador);

    return 0;
}
