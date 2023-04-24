/*
    a cada repeticao diminuir o tamanho de repeticoes
    start aumentar
    end diminuir
    ate inicio ser > que end
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
    int countPosition = 0;

    //control position variable
    int startPositionLine = 7;
    int startPositionColumn = 5;
    int endPositionColumn = 6;

    //sum
    if (o == 'S')
    {
        for (int i = startPositionLine; i < SIZE; i++) //line   
        {
            //condition
            for (int j = startPositionColumn; j <= endPositionColumn; j++) //column
            {
                //calc sum
                result += m[i][j];
            }

            //new value and control
            startPositionColumn--;
            endPositionColumn++;
        }
    }
    else if (o == 'M') //averege
    {
        for (int i = 0; i < SIZE; i++)
        {
            //condition
            for (int j = startPositionColumn; j < endPositionColumn; j++) //column
            {
                //calc sum all
                sum += m[i][j];

                //countPosition
                countPosition++;
            }
            //new value and control
            startPositionColumn--;
            endPositionColumn++;
        }

        //calc averege
        result = sum / countPosition;
    }

    return result;
}
