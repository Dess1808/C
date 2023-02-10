/*
    printar todos os quadrados de 1 ate N
    imprimir quadrado desses numeros
*/

#include<stdio.h>
#include<math.h>

#define SQUARE 2

int main(void)
{
    //controle variable
    int n = 0;
    int countLoop = 0;
    int controlNumbersEven = 1;

    //input
    scanf("%d", &n);

    //ouput with logic
    while (controlNumbersEven <= n)
    {
        if ((controlNumbersEven % 2) == 0)
        {
            printf("%d^2 = %d\n", controlNumbersEven, (int) pow(controlNumbersEven, SQUARE));
            controlNumbersEven++;
        }

        controlNumbersEven++;
    }

    return 0;
}