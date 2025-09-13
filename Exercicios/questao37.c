#include <stdio.h>

typedef struct{
    
    int vida;
    int pontuacao;

} atributos;

typedef struct {
    
    char nome[50];
    atributos stats;

} personagem;



int main (){

    personagem jogador;
    jogador.stats.vida = 100;
    jogador.stats.pontuacao = 0;

    printf("Insira o nome do personagem: ");
    scanf(" %[^\n]", jogador.nome);

    printf("---Status Inicial---\n Nome: %s | Vida: %d | Pontuação: %d\n", jogador.nome, jogador.stats.vida, jogador.stats.pontuacao);

    printf("\n");
    // Jogador coletou uma moeda e sofreu dano
    jogador.stats.pontuacao += 10;
    jogador.stats.vida -= 25;

    printf("---Status Final---\n Nome: %s | Vida: %d | Pontuação: %d\n", jogador.nome, jogador.stats.vida, jogador.stats.pontuacao);

    return 0;
}
