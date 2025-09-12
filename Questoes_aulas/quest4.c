#include <stdio.h>

int main (){

    float aluno1[] = {7.5, 8.0};
    float aluno2[] = {9.0, 5.5};
    float aluno3[] = {7.5, 10.0};

    float *alunos[3] = {&aluno1[0], &aluno2[0], &aluno3[0]};

    int i, c;
    
    for (c = 0; c < 3; c++){
        printf("Maior nota do aluno %d: ", c + 1);
        for (i = 1; i < 2; i++){

            if (*(alunos[c]) > *(alunos[c] + i)){
                printf("%.1f \n", *(alunos[c]));
            } 

            else {
                printf("%.1f \n", *(alunos[c] + i));
            }
        }
    }

    return 0;
}
