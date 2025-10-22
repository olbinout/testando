#include <stdio.h>
#include <stdlib.h>

typedef struct {

    int pos_x;
    int pos_y;
    int valor;

} moeda;

int main (){

    int quant_moedas;
    int total_pontos = 0;

    printf("Insira a quantidade de moedas que a fase terá: ");
    scanf("%d", &quant_moedas);

    moeda *pont_moedas;
    pont_moedas = (moeda *) malloc(quant_moedas * sizeof(moeda));
    if (pont_moedas == NULL){
        printf("Erro: a alocação de memória não foi bem sucedida!\n");
        return 1;
    }

    for (int c = 0; c < quant_moedas; c++){
        printf("Insira a posição da moeda e depois o seu valor: (x, y) [valor]\n");
        scanf("%d %d %d", &pont_moedas[c].pos_x, &pont_moedas[c].pos_y, &pont_moedas[c].valor);
    }

    for (int c = 0; c < quant_moedas; c++){
        total_pontos += pont_moedas[c].valor;
    }

    printf("Pontuação máxima do nível: %d\n", total_pontos);

    free(pont_moedas);

    return 0;
}

