#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, percentual, novosalario;

    printf("Digite o valor do salario: \n");
    scanf("%f%*c", &salario);
    printf("Digite o valor do percentual de aumento: \n");
    scanf("%f%*c", &percentual);

    novosalario = salario*percentual/100 + salario;

    printf("O novo salario e: %.2f\n", novosalario);
    return 0;
}