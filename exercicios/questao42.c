#include <stdio.h>

typedef struct {
    int res_x;
    int res_y;
    float volume_som;
} configuration;

int main (){

    FILE *file = fopen ("./arquivo_questao42.txt", "r");

    if (file == NULL){
        printf("O arquivo de configurações de tela não foi encontrado!\n");
        return 1;
    }

    configuration config;

    fscanf(file, "%d %d %f",&config.res_x, &config.res_y, &config.volume_som );

    printf("Configuracões carregadas:\nResolução: [%d]x[%d]\nVolume: %.1f\n",config.res_x, config.res_y, config.volume_som );

    fclose(file);

    return 0;
}
