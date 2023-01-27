/*
https://www.delftstack.com/pt/howto/c/modulo-in-c/#use-o-operador-de-m%C3%B3dulo--para-gerar-n%C3%BAmeros-aleat%C3%B3rios-no-intervalo-inteiro-fornecido-em-c
*/

//logia principal
//number % 2 == 0

#include<stdio.h>

#define SIZE 100

int main(void)
{
    //definition array of interger
    int numberRange[SIZE];

    //incialization 1 - 100
    for(int i = 0; i < SIZE; i++)
    {
        numberRange[i] = i+1;
    }

    //output evers
    for(int j = 0; j < SIZE; j++)
    {
        if((numberRange[j] % 2) == 0)
            printf("%i\n", numberRange[j]);
    }

    return 0;
}