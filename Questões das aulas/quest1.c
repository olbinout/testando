#include <stdio.h>

int main (){

    int valores;
    int pares = 0;

    for (int c = 0; c < 5; c++){
        printf("Insira um valor: ");
        scanf("%d", &valores);

        if (valores % 2 == 0){
            pares += 1;
        }
    }

    printf("A quantidade de pares: %d\n", pares);

    return 0;
}
