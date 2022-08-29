#include<stdio.h>
#include<cs50.h>

/*
    devolve verdade se x for impar e falso se não for
*/

int Impar(int x);

int main(void)
{
    int x = get_int("x: ");

    if(Impar(x))
    {
        printf("falso\n");
    }
    else
    {
        printf("verdade\n");
    }
}

int Impar(int x)
{
    if((x % 2) != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}