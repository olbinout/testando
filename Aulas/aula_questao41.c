#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    float nota1, nota2, nota3;
} estudante;

void menu (){
    printf("-----MENU PARA CADASTRO DE ALUNOS-----\n");
    printf("[1] - Cadastrar um aluno\n");
    printf("[2] - Sair do programa\n");
}

int main (){

    /* Modo padrão de mexer com arquivos: 
    FILE *(nome do file) = fopen ("/.nome-do-arquivo", "função que deseja fazer") */

    FILE *file = fopen("./estudantes_aula41.txt", "a");
    
    int opcao;
    estudante aluno;

    menu();
    scanf("%d", &opcao);

    while (opcao != 2){
        if (opcao == 1){
            printf("Digite o nome do aluno e suas três notas: ");
            scanf("%s %f %f %f", aluno.nome, &aluno.nota1, &aluno.nota2, &aluno.nota3);

            // Este 'fprintf' é como vai ficar os dados no arquivo de texto.
            fprintf(file, "Nome do aluno: %s\nPrimeira nota: %.1f\nSegunda nota: %.1f\nTerceira nota: %.1f\n====================\n", aluno.nome, aluno.nota1, aluno.nota2, aluno.nota3);

            // O 'fflush' serve para que no exato momento que for cadastrado um novo aluno, ele já escreva os dados no arquivo, quando ele não está, o dados só serão escritos quando o programa é finalizado.
            fflush(file);
        }
        menu();
        scanf("%d", &opcao);
    }

    printf("Programa finalizado!\n");
    fclose(file);

    return 0;
}
