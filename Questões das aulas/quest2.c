#include <stdio.h>

int main (){

    int vetor[10];
    int i;
    int menor, pos;

    for (i = 0; i < 10; i++){
        printf("Insira um valor na posição [%d] do vetor: ", i);
        scanf("%d", &vetor[i]);

        if (i == 0){
            menor = vetor[0];
            pos = 0;
        }

        else if (vetor[i] < menor){
            menor = vetor[i];
            pos = i;
        }
    }

    printf("O menor valor: %d\nA posição dele: %d", menor, pos);

    return 0;
}
