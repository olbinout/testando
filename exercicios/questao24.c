#include <stdio.h>
#include <stdlib.h>

int main() {

    int c, l; // l = linhas do usuário / c = colunas do usuário 
    int i, j; // i = linhas / j = colunas
    int quantidade_tijolo = 0; // Contador de tijolos;

    printf("Insira a quantidade de linhas: ");
    scanf("%d", &l);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &c);

    int **mapa = (int **) malloc(l * sizeof(int *)); // Criação do vetor que será adpatado como uma matriz

    if (mapa == NULL){
        printf("Erro: alocação de memória não foi bem sucedida!\n");
        return 1;
    }

    for (i = 0; i < l; i++){
        mapa[i] = (int *) malloc(c * sizeof(int));
        if (mapa[i] == NULL){
            printf("Erro: alocação de memória não foi bem sucedida!\n");
            int k;
            for (k = 0; k < i; k++){
                free(mapa[k]);
            }
            free(mapa);
            return 1;
        }
    }

    for (i = 0; i < l; i++){
        for (j = 0; j < c; j++){
            printf("(0) para VOID / (1) para TIJOLO / (2) para MOEDA: ");
            scanf("%d", &mapa[i][j]);

            if (mapa[i][j] == 1){
                quantidade_tijolo += 1;
            }
        }
    }

    printf("Quantidade de tijolos: %d\n", quantidade_tijolo);   

    for (i = 0; i < l; i++){
        free(mapa[i]); 
        mapa[i] = NULL;
    }

    free(mapa);
    mapa = NULL;

    return 0;
}
