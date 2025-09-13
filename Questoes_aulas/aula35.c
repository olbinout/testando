#include <stdio.h>
#include <string.h>

typedef struct {

    char nome[50];
    float salario;

} usuario;

int main (){

    usuario clientes[3];
    for (int c = 0; c < 3; c++){
        printf("Insira o nome do cliente %d: ", (c + 1));
        scanf(" %[^\n]", clientes[c].nome);

        printf("Insira o salário do cliente %d: ", (c + 1));
        scanf("%f", &clientes[c].salario);
        printf("\n");
    }  

    float maior_salario = clientes[0].salario;
    char maior_cliente[50];
    strcpy(maior_cliente, clientes[0].nome);

    for (int c = 1; c < 3; c++){
        if (clientes[c].salario > maior_salario){
            maior_salario = clientes[c].salario;
            strcpy(maior_cliente, clientes[c].nome);
        }
    }

    printf("%s possui o maior salário\nR$%.2f\n", maior_cliente, maior_salario);

    return 0;
}
