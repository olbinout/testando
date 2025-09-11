#include <stdio.h>

typedef struct{
    int posx;
    int posy;
    int moedas;
} personagem;


void atualizar_personagem(personagem *pont_jogador){
    pont_jogador->posx = 10;
    pont_jogador->posy = 5;
    pont_jogador->moedas += 1; 

}

int main (){

    personagem jogador;

    jogador.posx = 0;
    jogador.posy = 0;
    jogador.moedas = 0;

    printf("Posição inicial: (%d, %d) - Moedas: %d\n", jogador.posx, jogador.posy, jogador.moedas);
    atualizar_personagem(&jogador);

    printf("Posição atualizada: (%d, %d) - Moedas: %d\n", jogador.posx, jogador.posy, jogador.moedas);

    return 0;
}
