/**
 * modos de operação
 *
 *  para números negativos (menores que -10, multiplicar por 10 || maiores que -1, dividir por 10)
 *          /
 *  ===============>
 * -10 ------------ -1 0
 *  <===============
 *          X
 *
 *  para números positivos (maiores que 10, dividor por 10 || menores que 1, multiplicar por 10)
 *          X
 *   ================>
 * 0 1 ------------- 10
 *   <===============
 *          /
*/

#include<stdio.h>

const int TEN = 10;
const int ONE = 1;

int main(void)
{
    //variable control
    long double number = 0.0;

    //input
    scanf("%Lf", &number);

    //condition main
    if (number < 0)
    {
        //negativos
        printf("%.4Lf\n", number);
    }
    else
    {
        //positivos
        printf("%.4Lf\n", number);
    }

    return 0;
}
