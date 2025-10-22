#include <stdio.h>

typedef struct {
    char nome[50];
    float nota1, nota2, nota3;
} estudante;

int main (){

    FILE *file = fopen("./arquivo_aula42.txt", "r");

    if (file == NULL){
        printf("Ocorreu um erro ao abrir o arquivo.\n");
        return 1;
    }

    int n;
    printf("Lendo o número de estudantes atráves do arquivo...\n");
    fscanf(file, "%d", &n);

    estudante alunos[n];

    for (int i = 0; i < n; i++){
        fscanf(file, "%s %f %f %f", alunos[i].nome, &alunos[i].nota1, &alunos[i].nota2, &alunos[i].nota3);
    }

    for (int i = 0; i < n; i++ ){
        if (alunos[i].nota1 > alunos[i].nota2 && alunos[i].nota1 > alunos[i].nota3){
            printf("Estudante: %s\nMaior nota: %.1f\n", alunos[i].nome, alunos[i].nota1);
        }
        else if (alunos[i].nota2 > alunos[i].nota1 && alunos[i].nota2 > alunos[i].nota3){
            printf("Estudante: %s\nMaior nota: %.1f\n", alunos[i].nome, alunos[i].nota2);
        }
        else {
            printf("Estudante: %s\nMaior nota: %.1f\n", alunos[i].nome, alunos[i].nota3);
        }
        printf("\n");
    }

    fclose(file);

    return 0;
}
