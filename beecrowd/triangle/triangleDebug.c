/*
    condicao para a existencia de um triangulo
    https://pt.wikipedia.org/wiki/Tri%C3%A2ngulo

    area calculo trapezio
    https://brasilescola.uol.com.br/matematica/quadrilateros-e-trapezio.htm

    obs codigo:
    verificar se o 3 valores inseridos de ponto flutuantes dao condicao a um triagulo
    se sim
        calcular o perimetro (p = a + b + c)
    senao
        calcucar a area como um trapezio
*/

#include<stdio.h>

int AbsoluteSubtraido(int a, int b);

int main(void)
{
    float a, b, c;

    scanf("%f%f%f", &a, &b, &c);

    //logica principal
    if((AbsoluteSubtraido(b, c) < a) && (a < (b + c)))
    {
        //perimeter area
        float perimeter = a + b + c;

        printf("Perimetro = %.1f\n", perimeter);
    }
    else
    {
        //trapezium area
        float trapezium = ((a + b) * c) / 2;

        printf("Area = %.1f\n", trapezium);

    }

    return 0;
}

int AbsoluteSubtraido(int a, int b)
{
    int abs = a - b;

    if(abs < 0)
        return abs *= -1;
    else 
        return abs;
}