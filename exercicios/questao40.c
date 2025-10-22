#include <stdio.h>

typedef struct {
    char nome[50];
    int points;   
} player;

int main (){

    int n;

    printf("Insira a quantidade de jogadores na partida: ");
    scanf("%d", &n);

    player jogadores[n];

    FILE *file = fopen ("./highscore.txt", "w");

    for (int c = 0; c < n; c ++){
        printf("Insira o nome do jogador: ");
        scanf("%s", jogadores[c].nome);

        printf("Insira a pontuação do jogador: ");
        scanf("%d", &jogadores[c].points);
    }

    player maior_pontuacao = jogadores[0];

    for (int c = 1; c < n; c++){
        if (jogadores[c].points > maior_pontuacao.points){
            maior_pontuacao = jogadores[c]; 
        }    
    }

    fprintf(file ,"O PLAYER: %s \nteve a maior pontuação: %d", maior_pontuacao.nome, maior_pontuacao.points);
    
    fclose(file);
    
    return 0;
}
