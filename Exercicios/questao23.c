#include <stdio.h>
#include <stdlib.h>
#define linhas 5
#define colunas 10

int main (){

    int *level_map = (int *) malloc(linhas * colunas * sizeof(int));

    if (level_map == NULL){
        printf("Erro: programa não alocado de forma eficaz!\n");
        return 1;
    }

    int l, c;
    for (l = 0; l < linhas; l++){
        for (c = 0; c < colunas; c++){
            if (l == linhas - 1){
                *(level_map + (l * colunas + c )) = 1;
            } 

            else {
                *(level_map + (l * colunas + c)) = 0;
            }
        }
    }

    for (l = 0; l < linhas; l++){
        for (c = 0; c < colunas; c++){
            printf("%d ", *(level_map + (l * colunas + c)));
        }
        printf("\n");
    }

    free(level_map);
    level_map = NULL;
    
    return 0;
}

// m (i * numero_de_colunas + j)
// m == ponteiro
// i == linhas
// j == colunas
