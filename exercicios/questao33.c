#include <stdio.h>

typedef struct{
    int x, y;
} posicao;

void mover_personagem (posicao *ponteiro_posicao, int movimento_x, int movimento_y){
    ponteiro_posicao->x += movimento_x;
    ponteiro_posicao->y += movimento_y;
}

int main (){

    posicao posicao_jogador = {0, 0};
    
    posicao *ponteiro_posicao = &posicao_jogador;

    printf("Posição inicial do jogador: X = %d, Y = %d\n", posicao_jogador.x, posicao_jogador.y);

    mover_personagem(ponteiro_posicao, 10, 5);

    printf("Posição final do jogador: X = %d, Y = %d\n", posicao_jogador.x, posicao_jogador.y);

    return 0;
}
