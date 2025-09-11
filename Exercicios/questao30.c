#include <stdio.h>
#include <string.h>

struct jogador{
    char nome[50];
    int vida;
    int pontuacao;
};


int main (){

    struct jogador player1;

    player1.vida = 3;
    player1.pontuacao = 0;

    char nome_digitado[50];
    printf("Digite seu nome: ");
    scanf(" %[^\n]", nome_digitado);
    strcpy(player1.nome, nome_digitado);

    printf("Personagem criado! Bem-vindo, %s!\nVidas: %d\nPontuação: %d\n", player1.nome, player1.vida, player1.pontuacao);

    return 0;
}
