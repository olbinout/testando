#include <stdio.h>
#include <stdlib.h>


void menu_de_eventos(){
    printf("-------MENU DE EVENTOS-------\n");
    printf("[1] Adicionar um novo evento\n");
    printf("[2] Fechar o menu de eventos\n");
    printf("Insira: ");
}

int main (){

    FILE *file = fopen ("./arquivo_questao41.txt", "a");
    
    int opcao;
    char evento[100];

    menu_de_eventos();
    scanf("%d", &opcao);

    while (opcao != 2){
        if (opcao == 1){
            printf("Insira o nome do novo evento: ");
            scanf("%s", evento);
            fprintf(file, "Evento registrado: %s\n", evento);
            fflush(file);
        }   
        menu_de_eventos();
        scanf("%d", &opcao);
    }
    printf("Menu de eventos finalizado!\n");
    fclose(file);

    return 0;
}
