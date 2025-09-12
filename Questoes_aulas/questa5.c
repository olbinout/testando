#include <stdio.h>

int main (){

    float aluno1[] = {7.5, 8.0, 6.0};
    float aluno2[] = {5.0, 10.0, 7.0};
    float aluno3[] = {6.5, 8.5, 7.5};

    float *p1[3] = {aluno1, aluno2, aluno3};

    int quant = 0;
    float maior = p1[0][0];
    printf("%.1f\n", maior);

    for (int c = 0; c < 3; c++){
        for (int i = 0; i < 3; i++){
            if (*(p1[c] + i) >= 7){
                quant += 1;
            }

            if (*(p1[c] + i) > maior){
                maior = *(p1[c] + i);
            }
        }
    }

    printf("Quantidade de notas maiores ou iguais a 7: %d\n", quant);
    printf("Maior nota de todas: %.1f\n", maior);

    return 0;
}    
