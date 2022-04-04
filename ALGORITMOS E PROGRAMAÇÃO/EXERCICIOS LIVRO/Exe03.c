#include <stdio.h>
int main()
{
    int nota1,nota2,nota3,peso1,peso2,peso3,media;
    printf("digite o valor da nota 01:\n");
    scanf("%d%*c",&nota1);
    printf("digite o valor da nota 02:\n");
    scanf("%d%*c",&nota2);
    printf("digite o valor da nota 03:\n");
    scanf("%d%*c",&nota3);
    printf("digite o valor da peso 01:\n");
    scanf("%d%*c",&peso1);
     printf("digite o valor da peso 02:\n");
    scanf("%d%*c",&peso2);
     printf("digite o valor da peso 03:\n");
    scanf("%d%*c",&peso3);

    media=(nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);
    printf("A media é:%d\n",media);
    return 0;
    }