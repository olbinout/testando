#include <stdio.h>
#include <stdlib.h>

int main (){

    int n_inimigos;
    int *ponteiro_onda;

    printf("Insira o valor de inimigos para a onda: ");
    scanf("%d", &n_inimigos);

    ponteiro_onda = (int *) malloc( n_inimigos * sizeof(int));

    if (ponteiro_onda == NULL){
        printf("Erro: alocação de memória não foi suficiente!\n");
        return 1;
    } 

    for (int i = 0; i < n_inimigos; i++){
        printf("Digite o nome do ID do inimigo %d: ", i + 1);
        scanf("%d", (ponteiro_onda + i));
    }

    printf("Foi confirmado os ID's dos inimigos.\nAqui estão eles: ");
    for (int i = 0; i < n_inimigos; i++){
        printf("%d  ", *(ponteiro_onda + i));
    }

    free(ponteiro_onda);
    ponteiro_onda = NULL;

    return 0;
}
