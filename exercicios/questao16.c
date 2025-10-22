#include <stdio.h>
#include <string.h>

int main (){
    // [Quantidade de itens] [Quantidade de caracteres de cada item]
    char inventario[5][19];
    char special_item[19];
    int item_encontrado = 0;

    printf("Insira o nome dos 5 itens que estão no invetário \n");
    for (int i = 0; i < 5; i++){
        printf("Item %d: ", i + 1);
        scanf(" %[^\n]", inventario[i]);
    }

    printf("Agora, digite o nome do item que deve ser utilizado para abrir a porta: ");
    scanf(" %[^\n]", special_item);

    for (int c = 0; c < 5; c++){
        if (strcmp(inventario[c], special_item) == 0){
            item_encontrado = 1;
            break;
        }
    }

    if (item_encontrado == 1){
        printf("Porta aberta!\n");
    } else {
        printf("Você não tem o item necessário.\n");
    }
    
    return 0;
}
