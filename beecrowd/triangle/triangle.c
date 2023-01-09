#include<stdio.h>

int main(void)
{
    float a, b, c;
    int absolutoBC = 0;

    //input
    scanf("%f%f%f", &a, &b, &c);

    //valor absoluto da subtracao de b - c
    absolutoBC = b - c;
    if (absolutoBC < 0)
    {
        absolutoBC *= -1;
    }
        

    //defindo calculos
    if ((absolutoBC < a) && (a < (b + c)))
    {
        //perimitro calculo
        float perimetro = a + b + c;

        //output perimetro
        printf("Perimetro = %.1f\n", perimetro);
    }
    else 
    {
        //area trapazio
        float trapezio = ((a + b) * c) / 2;

        //output area trapezio
        printf("Area = %.1f\n", trapezio);
    }

    return 0;
}