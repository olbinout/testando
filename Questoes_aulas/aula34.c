#include <stdio.h>

struct pesquisa{
    int alcool, gasolina, diesel;
};

int main (){

    int voto;
    struct pesquisa opcoes = {0, 0, 0};
    struct pesquisa *p_opcoes = &opcoes;

    printf("Informe os votos dos clientes: \n");

    do{ scanf("%d", &voto);
        
        if (voto == 1){
            p_opcoes->alcool += 1;
        }
        else if (voto == 2){
            p_opcoes->gasolina += 1;
        }
        else if (voto == 3){
            p_opcoes->diesel += 1;
        }


    } while (voto != 4);

    printf("Quantidade de votos para alcool: %d\n", opcoes.alcool);
    printf("Quantidade de votos para galosina: %d\n", opcoes.gasolina);
    printf("Quantidade de votos para diesel: %d\n", opcoes.diesel);

    return 0;
}
