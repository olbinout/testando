#include <stdio.h>

struct item_coletavel {
    int valor_pontos;
    float peso;
};

int main (){

    int pontuacao_jogador = 0;

    struct item_coletavel moeda_bronze = {10, 0.5};
    struct item_coletavel moeda_prata = {50, 0.7};
    struct item_coletavel moeda_ouro = {100, 1};

    pontuacao_jogador += moeda_ouro.valor_pontos;
    printf("O jogador coletou uma moeda de ouro!\n");
    printf("Moeda de ouro coletada! Pontuação atual: %d\n", pontuacao_jogador);

    return 0;
}
