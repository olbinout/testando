#include <stdio.h>
#include <stdlib.h>

int main (){

    int *duracao_fumaca;
    duracao_fumaca = (int *) malloc(1 * sizeof(int));

    if (duracao_fumaca == NULL){
        printf("Erro: alocação de memória não funcionou!\n");
        return 1;
    } else {
        printf("Acerto: alocação de memória funcionou.\n");
        *duracao_fumaca = 5;

        printf("Bomba de fumaça ativada! Duração: %d segundos.\n", *duracao_fumaca);
        // 5 segundos se passam...
        free(duracao_fumaca);
        duracao_fumaca = NULL; // Deve ser feito isso para não sobrescrever dados.
        printf("A fumaça se dissipou.\n");
    }
    
    return 0;
}
