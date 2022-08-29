#include<stdio.h>
#include<cs50.h>

int dobro(int a);
int soma(int x, int y);

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i + %i =  %i\n",x, y, soma(x, y));
    printf("%i*2 = %i, %i*2 = %i\n", x, dobro(x), y, dobro(y));
}

int dobro(int a)
{
    return a * 2;
}

int soma(int x, int y)
{
    return x + y;
}