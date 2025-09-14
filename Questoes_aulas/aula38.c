#include <stdio.h>

enum tipo {VIP, STANDARD};

typedef struct{

    float total;
    char name[50];
    enum tipo cliente;

} comanda ;



int main (){
    comanda usuario;

    printf("Insira  o total a ser pago: ");
    scanf("%f", &usuario.total);
    printf("Insira seu nome: ");
    scanf(" %[^\n]", usuario.name);
    printf("Você VIP [0] ou STANDARD [1]\nInsira: ");
    scanf("%d", &usuario.cliente);  

    if (usuario.cliente == VIP){
        printf("Você receberá um desconto de 20 por cento em qualquer compra\n");
        printf("Total a pagar: %f\n", usuario.total - (usuario.total * 0.2));
    } 
    
    else if (usuario.cliente == STANDARD){
        printf("Você receberá um desconto de 5 por cento em qualquer compra\n");
        printf("Total a pagar: %f\n", usuario.total - (usuario.total * 0.05));
    }

    return 0;
}
