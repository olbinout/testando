#include <stdio.h>

int main (){

    int vetor[5];   
    int c, i;
    int fatorial = 1;

    for (c = 0; c < 5; c++){
        printf("Insira o valor no vetor[%d]: ", c);
        scanf("%d", &vetor[c]);

    }

    for (c = 0; c < 5; c++){
        for (i = 1; i <= vetor[c]; i++){
            fatorial = fatorial * i;
        }
        printf("O fatorial de %d é: %d\n", vetor[c], fatorial);

        fatorial = 1;
    }

    return 0;   
}
