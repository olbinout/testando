#include <stdio.h>

struct jogador {
    float pos_x;
    int pontuacao;
    int tem_pulo_duplo;
};

void jogador_(struct jogador *pont_heroi){
    printf("Posição X: %.2f, Pontos: %d, Pulo Duplo %d\n", pont_heroi->pos_x, pont_heroi->pontuacao, pont_heroi->tem_pulo_duplo);
}

int main (){

    struct jogador heroi;
    heroi.pos_x = 50.0;
    heroi.pontuacao = 0;
    heroi.tem_pulo_duplo = 0;

    printf("Início da fase! ");
    jogador_(&heroi);

    heroi.pontuacao += 10;
    heroi.tem_pulo_duplo = 1;

    printf("Itens coletados! ");
    jogador_(&heroi);
    
    return 0;
}
