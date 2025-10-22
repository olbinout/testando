#include <stdio.h>
#include <string.h>

int main (){

    char palavra_secreta[] = {"LUX"};
    char tentativa_jogador[50];

    printf(" Uma voz ancestral ecoa... 'Diga a palavra e passe': ");
    scanf(" %[^\n]", tentativa_jogador);

    if (strcmp(palavra_secreta, tentativa_jogador) == 0){
        printf("A porta mágica se abre...\n");
    } else {
        printf("Parece que a palavra mágica está incorreta.\n");
    }

    return 0;
}
