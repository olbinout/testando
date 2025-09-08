#include <stdio.h>
#include <string.h>

int main (){

    char nome_jogador[50]; 
    printf("Digite um nome para seu personagem: ");
    scanf(" %[^\n]s", nome_jogador);

    int caracteres =  strlen(nome_jogador);

    if (caracteres <= 15){
        printf("Nome válido! Bem-vindo ao jogo, %s\n", nome_jogador);
    } else {
        printf("Nome muito longo! Por favor, escolha um nome com ate 15 caracteres.\n");
    }

    return 0;
}
