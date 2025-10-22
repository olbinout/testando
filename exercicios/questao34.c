#include <stdio.h>

typedef struct {
    int saude, pontuacao, posx, posy;
} heroi;

int main (){
    // Atribuindo os valores para cada um:
    heroi meu_heroi = {100, 0, 0, 0};

    printf("Status do MEU HEROI: \n");
    printf("Saúde: %d\n", meu_heroi.saude);
    printf("Pontuação: %d\n", meu_heroi.pontuacao);
    printf("Posição: (%d, %d)\n", meu_heroi.posx, meu_heroi.posy);

    printf("\nApós as alterações:\n\n");

    heroi *ptr_meu_heroi = &meu_heroi;
    
    // O "MEU HERÓI" sofreu dano
    ptr_meu_heroi->saude -= 25;
    printf("Saúde: %d\n", meu_heroi.saude);

    // O "MEU HERÓI" coletou moedas
    ptr_meu_heroi->pontuacao += 50;
    printf("Pontuação: %d\n", meu_heroi.pontuacao);
 
    // O "MEU HERÓI" se moveu
    ptr_meu_heroi->posx += 10;
    ptr_meu_heroi->posy -= 5;
    printf("Posição: (%d, %d)\n", meu_heroi.posx, meu_heroi.posy);

    return 0;
}
