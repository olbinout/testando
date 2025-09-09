#include <stdio.h>
#include <stdlib.h>

int main (){

    float *ponteiro_altura_salto_duplo = NULL;

    printf("Jogador ainda não possui o Salto Duplo.\n");

    ponteiro_altura_salto_duplo = (float *) malloc(1 * sizeof(float));

    if (ponteiro_altura_salto_duplo == NULL){
        printf("Erro: não foi alocado memória suficientemente!\n");
        return 1;
    } else {
        printf("Acerto: foi alocado memória suficientemente.\n");

        *ponteiro_altura_salto_duplo = 15.5;
        printf("Pena Dourada coletada! Altura do Salto Duplo: %.2f\n", *ponteiro_altura_salto_duplo);

        free(ponteiro_altura_salto_duplo); // Usada para liberar a memória quando o power-up não fosse mais necessário.
    }

    return 0;
}
