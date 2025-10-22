#include <stdio.h>
#include <stdlib.h>

int main (){

    int *vida_inimigo; // Este ponteiro irá guardar o endereço do espaço de memória que você alocará.
    vida_inimigo = (int *) malloc(1 * sizeof(int)); // Alocando apenas 01 espaço de memória do tipo "int *" para o ponteiro vida inimigo, que irá receber não o conteúdo, mas sim o primeiro endereço desse espaço que foi alocado.

    if (vida_inimigo == NULL){ // Verificando se deu certo ou não a alocação.
        printf("Erro: memória insuficiente!\n");
        return 1; // Boa prática para quando acontece algum erro.
    } else {
        printf("Acerto: memória suficiente.\n");
    }

    *vida_inimigo = 80;
    printf("Um novo inimigo apareceu com %d de vida!\n", *vida_inimigo);

    *vida_inimigo -= 35;
    printf("O jogador atacou! Vida restante do inimigo: %d\n", *vida_inimigo);

    // Também uma boa prática liberar a memória alocada depois que finalizar o programa.
    free(vida_inimigo);

    return 0;
}
