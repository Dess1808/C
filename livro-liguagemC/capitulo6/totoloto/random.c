#include<stdio.h>
#include<stdlib.h>

#define RAND 20
#define QUANTIDADE 100

int main(void)
{
    //gerando numero aleatorio em a função rand() da stdlib
    for(int i = 0; i < RAND; i++)
    {
        //porem sempre gera os mesmos numeros, rand() gera um numero constante padrão
        printf("%d ", rand() % QUANTIDADE);
    }

    putchar('\n');

    return 0;
}