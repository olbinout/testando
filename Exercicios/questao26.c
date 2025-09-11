#include <stdio.h>
#include <stdlib.h>

int main(){

    int *mochila = (int *) malloc(3 * sizeof(int));

    printf("Você encontrou 3 itens, insira o ID deles para colocar na mochila. \n");
    for (int i = 0; i < 3; i++){
        printf("Item %d ID: ", (i + 1));
        scanf("%d", (mochila + i));
    }

    printf("Usuário coletou os itens: \n");
    for (int i = 0; i < 3; i++){
        printf("%d ", mochila[i]);
    }
    printf("\n");

    // O herói encontra um item de expansão

    mochila = realloc(mochila, 3 * sizeof(int) * 2);

    printf("Você encontrou mais 3 itens, insira o ID deles para colocar na mochila. \n");
    for (int i = 3; i < 6; i++){
        printf("Item %d ID: ", (i + 1));
        scanf("%d", &mochila[i]);
    }

    for (int i = 0; i < 6; i++){
        printf("%d ", *(mochila + i));
    }

    free(mochila);
    mochila = NULL;

    return 0;
}

// Apenas para treinar, este código possui memory leaks