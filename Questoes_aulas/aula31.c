#include <stdio.h>

typedef struct {
    float notas[3];
} estudante; // Este é o nome da estrutura


int main (){

    estudante joao_notas;
    int soma;

    printf("Informe suas notas: \n");
    for (int c = 0; c < 3; c++){
        printf("%d nota: ", c + 1);
        scanf("%f", &joao_notas.notas[c]);

        soma += joao_notas.notas[c];
    } float media = soma / 3;

    printf("A média de João: %.1f\n", media);

    return 0;
}
