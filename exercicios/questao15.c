#include <stdio.h>
#include <string.h>

int main (){

    char nome_jogador[50];
    char titulo_conquistado[50];

    printf("Digite o nome do jogador: ");
    scanf(" %[^\n]", nome_jogador); // Tive que dar um espaço para não dar problema.

    printf("Digite o seu título: ");
    scanf(" %[^\n]", titulo_conquistado);

    strcat(nome_jogador, " ");
    strcat(nome_jogador, titulo_conquistado);

    printf("O herói agora é conhecido como: %s\n", nome_jogador);

    return 0;
}
