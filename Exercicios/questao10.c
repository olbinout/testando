#include <stdio.h>

int main (){
    // Utilizando o sizeof
    int sala1[] = {10, 20, 5};
    int sala2[] = {50, 100};
    int sala3[] = {5, 5, 5, 10};

    int *ponteiro_salas[3] = {sala1, sala2 ,sala3};
    int tamanho[3] = {sizeof(sala1) / sizeof(sala1[0]), sizeof(sala2) / sizeof(sala2[0]), sizeof(sala3) / sizeof(sala3[0])};
    
    int i, c;

    for (i = 0; i < 3; i++){
        printf("Moedas na Sala %d: ", i + 1);
        for (c = 0; c < tamanho[i]; c++){
            printf("%d ", ponteiro_salas[i][c]);
        }
        printf("\n");
    }  
    
    return 0;
}
