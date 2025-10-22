#include <stdio.h>
#include <stdlib.h> // Necessário para a função qsort e para gerar números aleatórios

// Define uma constante para o tamanho. Fica mais fácil de alterar depois.
#define TAMANHO 100

// Função de comparação que o qsort precisa para saber como ordenar os floats.
// Ela compara dois números 'a' e 'b':
// - Retorna < 0 se a < b
// - Retorna 0 se a == b
// - Retorna > 0 se a > b
int compararFloats(const void *a, const void *b) {
    float float_a = *(const float *)a;
    float float_b = *(const float *)b;

    if (float_a < float_b) return -1;
    if (float_a > float_b) return 1;
    return 0;
}

int main() {
    float numeros[TAMANHO];
    int i;

    // --- Geração de Números Aleatórios (para não digitar 100 vezes) ---
    // srand(time(NULL)); // Use isso para gerar números diferentes a cada execução
    for (i = 0; i < TAMANHO; i++) {
        // Gera um número float aleatório entre 0 e 999.99
        numeros[i] = (float)rand() / (float)(RAND_MAX / 1000.0);
    }
    
    printf("Array com %d números gerados (amostra dos 10 primeiros):\n", TAMANHO);
    for(i = 0; i < 10; i++) {
        printf("%.2f ", numeros[i]);
    }
    printf("...\n");

    // 1. Ordenar o array usando a função qsort
    // Argumentos: o array, o número de elementos, o tamanho de cada elemento, a função de comparação.
    qsort(numeros, TAMANHO, sizeof(float), compararFloats);

    // 2. Mostrar os resultados
    printf("\n--- Resultados ---\n");

    // A ordem crescente é a ordem do array após a ordenação
    printf("Ordem Crescente: \n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%.2f ", numeros[i]);
    }
    printf("\n\n");

    // Para a ordem decrescente, basta imprimir o array ordenado de trás para frente
    printf("Ordem Decrescente: \n");
    for (i = TAMANHO - 1; i >= 0; i--) {
        printf("%.2f ", numeros[i]);
    }
    printf("\n");

    return 0;
}
