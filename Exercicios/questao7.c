#include <stdio.h>

void ler_cenario(int n, int *ponteiro_cenario){
    for (int c = 0; c < n; c++){
        printf("Insira um valor no vetor, sendo ele 0 ou 1: ");
        scanf("%d", ponteiro_cenario + c);
    }
}
int main (){

    int n;

    printf("Digite o número de blocos de cenário: ");
    scanf("%d", &n);

    int cenario[n];
    int *ponteiro_cenario = &cenario[0];

    ler_cenario(n, ponteiro_cenario);

    for (int c = 0; c < n; c++){
        if (*(ponteiro_cenario + c) == 1){
            *(ponteiro_cenario + c) = 2;
            break;
        }
    }
    
    for (int c = 0; c < n; c++){
        printf("%d ", *(ponteiro_cenario + c));
    }

    printf("\n");
    
    return 0;
}
