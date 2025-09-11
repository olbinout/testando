#include <stdio.h>

struct inimigos{
    int vida;
    int ataque;
    float velocidade;
};


void ler_cogumelo_zumbi(struct inimigos cogumelo_zumbi){
    printf("--- Atributos do Inimigo: Cogumelo Zumbi ---\n");
    printf("Vida: %d\n", cogumelo_zumbi.vida);
    printf("Ataque: %d\n", cogumelo_zumbi.ataque);
    printf("Velocidade: %.1f\n", cogumelo_zumbi.velocidade);
}

void ler_cavaleiro_esqueleto(struct inimigos cavaleiro_esqueleto){
    printf("--- Atributos do Inimigo: Cavaleiro Esqueleto ---\n");
    printf("Vida: %d\n", cavaleiro_esqueleto.vida);
    printf("Ataque: %d\n", cavaleiro_esqueleto.ataque);
    printf("Velocidade: %.1f\n", cavaleiro_esqueleto.velocidade);
}


int main (){

    struct inimigos cogumelo_zumbi, cavaleiro_esqueleto;
    
    cogumelo_zumbi.vida = 20;
    cogumelo_zumbi.ataque = 5;
    cogumelo_zumbi.velocidade = 0.8;
    
    cavaleiro_esqueleto.vida = 80;
    cavaleiro_esqueleto.ataque = 15;
    cavaleiro_esqueleto.velocidade = 1.2;

    ler_cogumelo_zumbi(cogumelo_zumbi);
    printf("\n");
    ler_cavaleiro_esqueleto(cavaleiro_esqueleto);

    return 0;
}

// Preferi fazer funções para deixar o código mais limpo na main.

