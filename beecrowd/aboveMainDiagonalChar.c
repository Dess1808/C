/*

*/

#include<stdio.h>

//global CONST
const int SIZE = 12;

int main(void)
{
    //controle variable, array bidimensional
    char m[SIZE][SIZE];
    int newPosition = 1;
    int controlRepetition = 0;

    //input array bi
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            m[i][j] = '#';
        }
    }

    //output exemplo completo
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%c", m[i][j]);
        }

        putchar('\n');
    }


    putchar('\n');
    putchar('\n');

    //output exemplo digonal alta
     for (int i = 0; i < SIZE; i++) //line   
    {
        //condition
        for (int j = newPosition; j < SIZE; j++) //column
        {
            //calc sum
            printf(" m[%d][%d] ", i, j);
        }

        putchar('\n');

        //new value and control
        controlRepetition++;
        newPosition = controlRepetition + 1;
    }

    return 0;
}