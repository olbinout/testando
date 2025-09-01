#include <stdio.h>

int main (){

    int vetor[10];
    int *pont_vetor = &vetor[0];
    int i;
    int menor, pos;

    for (i = 0; i < 10; i++){
        printf("Insira um valor na posição [%d] do vetor: ", i);
        scanf("%d", (pont_vetor + i));

        if (i == 0){
            menor = *pont_vetor;
            pos = 0;
        }

        else if (*(pont_vetor + i) < menor){
            menor = *(pont_vetor + i);
            pos = i;
        }
    }

    printf("O menor valor: %d\nA posição dele: %d", menor, pos);

    return 0;
}
