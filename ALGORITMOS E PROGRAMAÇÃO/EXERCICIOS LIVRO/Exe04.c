#include <stdio.h>
#include <stdlib.h>

int main(){
    float sal, aumento, novosal;

    printf("digite o valor do sal:\n");
    scanf("%f%*c", &sal);

    aumento = sal * 25 / 100;
    novosal = sal + aumento;
    printf("O aumento: %.2f \n", novosal);
    return 0;
}