#include <stdio.h>

int main (){

    float valores[] = {7, -5 , 6, -3.4, 4.6, 12};
    float *ponteiro_valores = &valores[0];
    int posit = 0;
    float total, media;
    int i;

    for (i = 0; i < 6; i++){
        if (*(ponteiro_valores + i) > 0){
            posit += 1;
            total = total + *(ponteiro_valores + i);
        }
    }

    media = total / posit;
    printf("%d valores positivos\n", posit);
    printf("%.1f\n", media);

    return 0;
}
