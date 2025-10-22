#include <stdio.h>

enum estado_personagem {PARADO,CORRENDO,PULANDO};

int main(){

    enum estado_personagem estado_atual;

    printf("0 para PARADO, 1 para CORRENDO, ou 2 para PULANDO\nInsira: ");
    scanf("%d", &estado_atual);

    if (estado_atual == PARADO){
        printf("O personagem está PARADO.\n");
    }

    else if (estado_atual == CORRENDO){
        printf("O personagem está CORRENDO!\n");
    }

    else if (estado_atual == PULANDO){
        printf("O personagem está PULANDO no AR!\n");
    }

    else{
        printf("ESTADO INVÁLIDO!!!\n");
    }
    

    return 0;
}
