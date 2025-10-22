#include <stdio.h>
#include <string.h>

int main (){

    char frase_inicio_luta[] = {"Você nunca irá sair daqui com vida!"};
    char caixa_dialogo[100] = {"(Silêncio)"};

    printf("%s\n", caixa_dialogo);
    strcpy(caixa_dialogo, frase_inicio_luta);
    printf("%s\n", caixa_dialogo);

    return 0;
}
