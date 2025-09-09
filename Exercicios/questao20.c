#include <stdio.h>
#include <stdlib.h>

int main (){

    void *ponteiro_duracao = malloc (1 * sizeof(int));

    *((int *)ponteiro_duracao) = 10;
    printf("Power-up 'Super Salto' ativado! Duracao: %d segundos.\n", *((int *)ponteiro_duracao));

    // Diminuindo o tempo.
    *((int *)ponteiro_duracao) -= 3;
    printf("3 segundos se passaram... Duração restante: %d segundos\n", *((int *)ponteiro_duracao));

    free(ponteiro_duracao);

    return 0;
}
