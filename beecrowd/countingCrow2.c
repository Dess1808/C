#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const int SIZEDEFAULT = 3;
const int SIZEINPUT = 7;

void CheckChar(char is[SIZEDEFAULT], int sf[SIZEDEFAULT], char c);

int main(int argc, char const *argv[])
{
    //control variables
    char inputString[SIZEINPUT]; //verificar melhor forma

    int stringFinal[SIZEDEFAULT];
    int winningLottery[SIZEDEFAULT];
    
    int sumTotal = 0;
    int countScreams = 0;

    while(countScreams < 3)
    {    
        //input
        scanf(" %[^\n]", inputString);

        //contition main, compara string input com a caw caw
        if (!strcmp(inputString, "caw caw") || !strcmp(inputString, "caw"))
        {
            //output
            printf("%d\n", sumTotal);

            //reset sumTotal
            sumTotal = 0;
            countScreams++;
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

    //middle
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
