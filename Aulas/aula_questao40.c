#include <stdio.h>

typedef struct{
    char nome[50];
    int questoes;
} estudante;

int main (){

    int n;

    printf("Insira a quantidade de alunos que fizeram questões: ");
    scanf("%d", &n);

    estudante alunos_questoes[n];

    FILE *file = fopen ("./arquivo_aula40.txt", "w");

    for (int c = 0; c < n; c++){
        printf("Insira o nome e depois a nota do aluno %d: ", c + 1);
        scanf("%s %d", alunos_questoes[c].nome, &alunos_questoes[c].questoes);
    }

    estudante mais_questoes = alunos_questoes[0];

    for (int c = 1; c < n; c++){
        if (mais_questoes.questoes < alunos_questoes[c].questoes){
            mais_questoes = alunos_questoes[c];
        }
    }

    fprintf(file, "Aluno com mais questões: %s\n", mais_questoes.nome);
    fprintf(file, "Questões feitas: %d\n", mais_questoes.questoes);

    fclose(file);
    
    return 0;
}
