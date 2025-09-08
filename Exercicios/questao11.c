#include <stdio.h>

int main (){

    // Todas as armas estão carregadas.
    int balas[2] = {30, 30 };
    int granadas[2] = {5, 5};
    int foguetes[2] = {2, 2};
    
    int *invetario[3] = {&balas[0], &granadas[0], &foguetes[0]};
    
    printf("Invetário atual: \n");
    printf("Balas: %d\n", balas[0]);
    printf("Granadas: %d\n", granadas[0]);
    printf("Foguetes: %d\n", foguetes[0]);

    for (int c = 0; c < 3; c++){
        *invetario[c] = *(invetario[c]) - 1;
    }
    
    printf("\n");
    printf("Invetário após o uso: \n");
    printf("Balas: %d\n", balas[0]);
    printf("Granadas: %d\n", granadas[0]);
    printf("Foguetes: %d\n", foguetes[0]);

    return 0;
}
