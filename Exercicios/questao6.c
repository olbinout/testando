#include <stdio.h>

int main (){

    int plataformas[] = {10, 20, 5, 15, 30};
    int *ponteiro_plataforma = &plataformas[0];
    int altura_total = 0;

    for (int c = 0; c < 5; c++){
        altura_total += *(ponteiro_plataforma + c);
    }

    printf("Altura total do salto: %d\n", altura_total);

    return 0;
}
