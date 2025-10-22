#include <stdio.h>
#include <stdlib.h>

int main (){

    int inimigos;
    int *status_inimigos;

    printf("Digite a quantidade de inimigos da fase: ");
    scanf("%d", &inimigos);

    status_inimigos = (int *) calloc(inimigos, sizeof(int));
    if (status_inimigos == NULL){
        printf("Erro: alocação de memória com 'calloc' não funcionou!\n");
        return 1;
    }
    
    for (int i = 0; i < inimigos; i++){
        printf("Inimigo %d: Inativo (%d) \n", (i + 1), status_inimigos[i]);
    }   printf("\nAtivando os inimigos da fase...\n\n");

    // Ativandos os inimigos pelo "for"
    for (int i = 0; i < inimigos; i++){
        status_inimigos[i] = 1;
    }

    for (int i = 0; i < inimigos; i++){
        printf("Inimigo %d: Ativado (%d) \n", (i + 1), status_inimigos[i]);
    }

    free(status_inimigos);
    status_inimigos = NULL;

    return 0;
}
