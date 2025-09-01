#include <stdio.h>

int main (){

    int moedas_coletadas[] = {10, 50, 20, 5, 100};
    int pontuacao_total = 0;
    int *ponteiro_moeda = &moedas_coletadas[0];

    for( ; ponteiro_moeda < moedas_coletadas + 5; ponteiro_moeda++){
        pontuacao_total = pontuacao_total + *(ponteiro_moeda);
    }

    printf("Pontuação total do nível: %d\n", pontuacao_total);

    return 0;
}
