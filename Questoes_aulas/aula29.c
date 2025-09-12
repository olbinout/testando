#include <stdio.h>

struct produto {
    int codigo;
    float preco;
};

int main (){

    struct produto p1 = {1, 2.50};
    struct produto p2 = {2, 4.00};
    struct produto p3 = {3, 5.00};
    int codigo;
    int quantidade;

    printf("Informe o código do produto: ");
    scanf("%d", &codigo);
    printf("Informe a quantidade do produto: ");
    scanf("%d", &quantidade);

    if (codigo == p1.codigo){
        float valor = quantidade * p1.preco; 
        printf("O preço a ser pago: %.2f\n", valor);
    }

    else if (codigo == p2.codigo){
        float valor = quantidade * p2.preco; 
        printf("O preço a ser pago: %.2f\n", valor);
    }

    else if (codigo == p3.codigo){
        float valor = quantidade * p3.preco; 
        printf("O preço a ser pago: %.2f\n", valor);
        
    }

    return 0;
}
