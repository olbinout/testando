#include <stdio.h>

int main (){
    // Utilizando o sizeof
    int sala1[] = {10, 20, 5};
    int sala2[] = {50, 100};
    int sala3[] = {5, 5, 5, 10};

    int *ponteiro_salas[3];
    ponteiro_salas[0] = sala1;
    ponteiro_salas[1] = sala2;
    ponteiro_salas[2] = sala3;

    int tamanho1 = sizeof(sala1) / sizeof(sala1[0]);
    int tamanho2 = sizeof(sala2) / sizeof(sala2[0]);
    int tamanho3 = sizeof(sala3) / sizeof(sala3[0]);
    int i;

    printf("Moedas da Sala 1: ");
    for (i = 0; i < tamanho1; i++){
        printf("%d ", ponteiro_salas[0][i]);
    }
    printf("\n");

    printf("Moedas da Sala 2: ");
    for (i = 0; i < tamanho2; i++){
        printf("%d ", ponteiro_salas[1][i]);
    }
    printf("\n");

    printf("Moedas da Sala 3: ");
    for (i = 0; i < tamanho3; i++){
        printf("%d ", ponteiro_salas[2][i]);
    }
    printf("\n");

    return 0;
}

