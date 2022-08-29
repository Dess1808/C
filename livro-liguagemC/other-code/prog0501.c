#include<stdio.h>

void aster(int qtd);

int main(void)
{
    aster(20);
    printf("Números entre 1 a 5\n");
    aster(20);

    for(int i = 1; i < 6; i++)
    {
        printf("%i\n", i);
    }

    aster(20);
}

void aster(int qtd)
{
    for(int i = 0; i < qtd; i++)
    {
        printf("*");
    }
    printf("\n");
}