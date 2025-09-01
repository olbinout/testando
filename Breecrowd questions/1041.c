#include <stdio.h>

int main (){

    int x, y;

    printf("Insira a coordenada x e y: ");
    scanf("%d %d", &x, &y);

    if (x == 0 || y == 0){
        printf("Origem\n");
    }

    else if (x > 0 && y > 0 ){
        printf("Q1\n");
    }

    else if (x < 0 && y > 0){
        printf("Q2\n");
    }

    else if (x < 0 && y < 0){
        printf("Q3\n");
    }

    else if (x > 0 && y > 0){
        printf("Q4\n");
    }

    return 0;
}
