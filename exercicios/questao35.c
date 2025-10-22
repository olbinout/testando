#include <stdio.h>

typedef struct {

    char nome[50];
    int valor_ponts;

} item_coletavel;

int main (){

    item_coletavel inventario[3];

    for (int c = 0; c < 3; c++){
        printf("Insira o nome do ítem %d: ", (c + 1));
        scanf(" %[^\n]", inventario[c].nome);
        
        printf("Insira a quantidade de pontos do ítem %d: ", (c + 1));
        scanf("%d", &inventario[c].valor_ponts);
    }

    item_coletavel item_maior_valor = inventario[0];
    
    for (int c = 1; c < 3; c++){
        if (inventario[c].valor_ponts > item_maior_valor.valor_ponts){
            item_maior_valor = inventario[c];
        }
    }

    printf("O item mais valioso coletado foi: %s \n", item_maior_valor.nome);

    return 0;
}
