#include <stdio.h>

int main (){

    int pontuacao = 0;
    int *ponteiro_pontuacao = &pontuacao;

    printf("Pontuacao inicial: %d\n", pontuacao);
    
    for (int i = 0; i < 3; i++){
        *ponteiro_pontuacao += 10;
        printf("***O jogador coletou +1 moeda +10 pontos***\n");
    }

    printf("\n");
    
    printf("Pontuacao final apos coletar 3 moedas: %d\n", pontuacao);

    return 0;
}
