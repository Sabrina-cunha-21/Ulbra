#include <stdio.h>
int main()
{
    int nota1, nota2, nota3, media;
    printf("digite o valor da nota 01;\n");
    scanf("%d%*c",&nota1);
    printf("digite o valor da nota 02;\n");
    scanf("%d%*c",&nota2);
    printf("digite o valor da nota 03;\n");
    scanf("%d%*c",&nota3);

    media=nota1+nota2+nota3/3;
    printf("A media é:%d\n",media);
    return 0;
}