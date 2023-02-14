/*
    ler 1000 numeros e imprimir o maior e qual valor da posicao que foi lido

    testado com 5 numeros
*/

#include<stdio.h>

#define SIZE 5

int main(void)
{
    //control variable
    int numbers[SIZE];
    int currentNumber = 0;
    int inputPosition = 0;

    //input with logic main
    for (int i = 1; i <= SIZE; i++)
    {
        scanf("%d", &numbers[i]);

        if (numbers[i] > currentNumber)
        {
            currentNumber = numbers[i];
            inputPosition = i;
        }
    } 

    //output
    printf("%d\n%d\n", currentNumber, inputPosition);

    return 0;
}