/*
    calculo em diagonal
    line + 1 e o resultado de onde comecar
*/

#include<stdio.h>

//global CONST
const int SIZE = 12;

double SumOrAverage(char o, double m[SIZE][SIZE]);

int main(void)
{
    //controle variable, array bidimensional
    double m[SIZE][SIZE];
    char o;

    //adicionando blank na leitura, para evitar bugs
    scanf(" %c", &o);

    //input array bi
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }

    //output
    printf("%.1lf\n", SumOrAverage(o, m));

    return 0;
}

double SumOrAverage(char o, double m[SIZE][SIZE])
{
    double result = 0;
    double sum = 0;
    int newPosition = 1; //start first position
    int controlRepetition = 0;
    int countPosition = 0;

    //sum
    if (o == 'S')
    {
        for (int i = 0; i < SIZE; i++) //line   
        {
            //condition
            for (int j = newPosition; j < SIZE; j++) //column
            {
                //calc sum
                result += m[i][j];
            }

            //new value and control
            controlRepetition++;
            newPosition = controlRepetition + 1;
        }
    }
    else if (o == 'M') //averege
    {
        for (int i = 0; i < SIZE; i++)
        {
            //condition
            for (int j = newPosition; j < SIZE; j++) //column
            {
                //calc sum all
                sum += m[i][j];

                //countPosition
                countPosition++;
            }
            //new value and control
            controlRepetition++;
            newPosition = controlRepetition + 1;
        }

        //calc averege
        result = sum / countPosition;
    }

    return result;
}
