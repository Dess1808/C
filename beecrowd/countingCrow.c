/*
    1 * 4, 
    1 * 2, 
    1 * 1
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const int SIZEDEFAULT = 3;

void CheckChar(char is[SIZEDEFAULT], int sf[SIZEDEFAULT], char c);

int main(void)
{
    //control variables
    char inputString[SIZEDEFAULT];
    char caw[] = "caw"; //verificar melhor forma
    int stringFinal[SIZEDEFAULT];
    int sumTotal = 0;


    while(1)
    {    
        //input
        scanf(" %s", inputString);

        //contition main
        if (!strcmp(inputString, caw))
        {
            //output
            printf("%d\n", sumTotal);

            //reset sumTotal
            sumTotal = 0;
        }
        else 
        {
            //teste de verificação
            CheckChar(inputString, stringFinal, '*');

            //somando valores
            for (int i = 0; i < SIZEDEFAULT; i++)
            {
                sumTotal += stringFinal[i];
            }
        }
    }

    return 0; 
}

void CheckChar(char is[SIZEDEFAULT], int sf[SIZEDEFAULT], char c)
{
    //left
    if (is[0] == c)
    {
        sf[0] = 4;
    }
    else 
    {
        sf[0] = 0;
    }

    //middles
    if (is[1] == c)
    {
        sf[1] = 2;
    }
    else 
    {
        sf[1] = 0;
    }

    //right
    if (is[2] == c)
    {
        sf[2] = 1;
    }
    else 
    {
        sf[2] = 0;
    }
}