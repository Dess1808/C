/*
    hipotese: 
    Somar todos os valores e subtrair por 3, pos pelo menos um filtro de linha 
    terão todos os slotes disponiveiss.
*/

#include<stdio.h>

int main(void)
{
    int a, b, c, d = 0;

    //input
    scanf("%d%d%d%d", &a, &b, &c, &d);

    //output
    printf("%d\n", (a + b + c + d) - 3);

    return 0;
}