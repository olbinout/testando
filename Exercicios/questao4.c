#include <stdio.h>

void aplicar_powerup_pontuacao_dupla(int *ponteiro_pontuacao){
    *ponteiro_pontuacao *= 2;
}

int main (){

    int pontuacao_jogador = 1500;
    
    printf("Pontuacao antes do power-up: %d\n", pontuacao_jogador);

    int *ponteiro_pontuacao = &pontuacao_jogador;
    aplicar_powerup_pontuacao_dupla(ponteiro_pontuacao);

    printf("Pontuacao apos o power-up: %d\n", pontuacao_jogador);

    return 0;
}
