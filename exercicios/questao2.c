#include <stdio.h>

int main (){

    int tesouro_local = 0;
    int *plataforma_secreta = &tesouro_local;

    printf("O tesouro ainda não apareceu. Valor: %d\n", tesouro_local);

    *plataforma_secreta = 1;

    printf("O personagem pisou na plataforma secreta! O tesouro apareceu! Valor: %d\n", tesouro_local);

    return 0;
}
