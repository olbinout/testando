#include <stdio.h>

int main (){

    int idade[3];
    float salario[3];
    int horas[3];

    printf("Insira a idade, salario e horas trabalhadas de cada funcionário: \n");
    
    for (int i = 0; i < 3; i++){
        scanf("%d %f %d", &idade[i], &salario[i], &horas[i]);
    }

    int maior_salario = 0;
    
    for (int i = 1; i < 3; i++){
        if (salario[i] > salario[maior_salario]){
            maior_salario = i;
        }
    }

    printf("O maior salario é do %d trabalhador\n", maior_salario + 1);

    return 0; 
}
