#include <stdio.h>

int main (){

    float salarios[3] = {400.00, 800.01, 2000.00};
    float new_salario;
    int i;

    for (i = 0; i < 3; i++){
        
        if (0 < salarios[i] && salarios[i] <= 400){
            new_salario = salarios[i] * 1.15;
            printf("Novo salário: %.2f\n", new_salario);
            printf("Reajuste ganho: %.2f\n", new_salario - salarios[i]);
            printf("Em percentual: 15 por cento\n");
        }

        else if (400.01 <= salarios[i] && salarios[i] <= 800){
            new_salario = salarios[i] * 1.12;
            printf("Novo salário: %.2f\n", new_salario);
            printf("Reajuste ganho: %.2f\n", new_salario - salarios[i]);
            printf("Em percentual: 12 por cento\n");
        }

        else if (800.01 <= salarios[i] && salarios[i] <= 1200){
            new_salario = salarios[i] * 1.1;
            printf("Novo salário: %.2f\n", new_salario);
            printf("Reajuste ganho: %.2f\n", new_salario - salarios[i]);
            printf("Em percentual: 10 por cento\n");
        }

        else if (1200.01 < salarios[i] && salarios[i] <= 2000){
            new_salario = salarios[i] * 1.07;
            printf("Novo salário: %.2f\n", new_salario);
            printf("Reajuste ganho: %.2f\n", new_salario - salarios[i]);
            printf("Em percentual: 7 por cento\n");
        }

        else if (salarios[i] > 2000){
            new_salario = salarios[i] * 1.04;
            printf("Novo salário: %.2f\n", new_salario);
            printf("Reajuste ganho: %.2f\n", new_salario - salarios[i]);
            printf("Em percentual: 4 por cento\n");
        }
        new_salario = 0;
        printf("\n");
    }

    return 0;
}
