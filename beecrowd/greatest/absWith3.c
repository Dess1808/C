#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>

int ValorAbs(int n);

int main(void)
{
    int n1 = get_int("n1: ");
    int n2 = get_int("n2: ");
    int n3 = get_int("n2: ");

    //so suporta operação com 2 números
    printf("valor absoluto eh %i\n", ValorAbs(ValorAbs(n1 - n2) - n3));
}

int ValorAbs(int n)
{
    if(n < 0)
        return n *= -1;
    else 
        return n;
}