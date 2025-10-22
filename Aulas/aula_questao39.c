#include <stdio.h>

typedef struct {

    char nome[50];
    float nota1;
    float nota2;
    float nota3;

} estudante;

int main (){

    estudante vetor[3];

    FILE *file = fopen ("./estudantes.txt", "r");

    printf("Lendo o arquivo 'estudantes.txt'\n");

    for (int i = 0; i < 3; i++){
        fscanf(file, "%s %f %f %f", vetor[i].nome ,&vetor[i].nota1, &vetor[i].nota2, &vetor[i].nota3);
    }

    fclose(file);

    for (int i = 0; i < 3; i++){
        // Fazendo a média das notas de cada um dos três estudantes.
        float media = (vetor[i].nota1 + vetor[i].nota2 + vetor[i].nota3) / 3;

        // Mostrando o nome e a média dos estudantes que tem nota maior ou igual a 7.
        if (media >= 7){
            printf("O estudante %s passou com média %.1f!\n", vetor[i].nome, media);
        }
    
    }

    return 0;
}
