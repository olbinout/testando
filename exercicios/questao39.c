#include <stdio.h>

typedef struct {
    char nome[50];
    float HP;
    float ATK;
} features_enimes;

int main (){

    features_enimes inimigos[3];

    FILE *file = fopen ("./features_enemies.txt", "r");

    if (file == NULL) {
        perror("Erro ao abrir o arquivo 'features_enemies.txt'");
        return 1; // Termina o programa se o arquivo não for encontrado
    }

    printf("Lendo o arquivo\n");

    for (int c = 0; c < 3; c++){
        fscanf(file, "%s %f %f", inimigos[c].nome, &inimigos[c].HP, &inimigos[c].ATK);
    }

    fclose(file);

    for (int i = 0; i < 3; i++){
        
        printf("Calulando o nível de ameaça do %s...\n", inimigos[i].nome);
        float soma = (inimigos[i].ATK + inimigos[i].HP);       
        
        if (soma >= 200){
            printf("O NÍVEL DE AMEAÇA É %.1f!!!\n", soma);
        }

        else {
            printf("Seu nível de ameaça não chega nem a 200.\n");
        }
        printf("\n");
    }

    return 0;
}
