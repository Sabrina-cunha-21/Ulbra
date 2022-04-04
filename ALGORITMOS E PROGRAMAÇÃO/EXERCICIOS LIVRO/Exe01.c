#include <stdio.h>
int main()
{
    int num1, num2, num3, num4, soma;
    printf("digite o valor de numero1:\n");
        scanf("%d%*c", &num1);
    printf("digite o valor de numero2:\n");
        scanf("%d%*c", &num2);
    printf("digite o valor de numero3:\n");
        scanf("%d%*c", &num3);
    printf("digite o valor de numero4:\n");
        scanf("%d%*c", &num4);
    soma=num1+num2+num3+num4;
    printf("A soma é:%d\n",soma);
    return 0;
}
