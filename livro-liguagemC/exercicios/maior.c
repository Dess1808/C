/*
    Devolva o maior numero dos valores de a, b, c
*/

#include<stdio.h>
#include<cs50.h>

int Maior(int a, int b, int c);

int main(void)
{
    int a = get_int("a: ");
    int b = get_int("b: ");
    int c = get_int("c: ");

    printf("%i\n", Maior(a, b, c));
}

int Maior(int a, int b, int c)
{
    if((a > b) && (a > c))
    {
        return a;
    }
    else if ((b > a) && (b > c))
    {
        return b;
    }
    else if ((c > b) && (c > a))
    {
        return c;
    }
    else
    {
        printf("Um ou mais numeros são iguais!");
        return 0;
    }
}