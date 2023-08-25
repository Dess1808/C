/*
    1 * 4, 1 * 2, 1 * 1;
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const int SIZEDEFAULT = 3;


int main(void)
{
    //input variables
    char inputString[SIZEDEFAULT];
    char stringFinal[SIZEDEFAULT];
 
    //teste de identificação de caracteres
    scanf(" %s", inputString);

    //identificação da direita para a esquerda
    for (int i = 0, size = strlen(inputString); i < size; i++)
    {
        if (inputString[i] == '-')
            stringFinal[i] = 0;
        else 
            stringFinal[i] = 1;
    }


    

    return 0; 
}