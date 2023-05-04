/*
    utilizar regra de 3 para calcular valores

    - enquanto for diferente de 0 continuar lendo inputs, qualquer um dos inputs

    - metros quadrados dos dois valores inseridos

    regra de 3
    metrosQuadrados --- x%
    x ----------------- 100%

    - valores resultante, tirar raiz quadrada do mesmo
*/

#include<stdio.h>

int main(void)
{
    int a, b, c = 0;

    do
    {
        //input
        scanf("%d%d%d", &a, &b, &c);


    } while ((a != 0) || (b != 0) || (c != 0));
    
    return 0;
}