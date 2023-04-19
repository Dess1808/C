#include<stdio.h>

//global CONST
const int SIZE = 12;

double SumOrAverage(int column, char t, double m[SIZE][SIZE]);

int main(void)
{
    //controle variable, array bidimensional
    double m[SIZE][SIZE];
    int column = 0;
    char t;

    //input option of operation, number of columns and operation in char
    scanf("%d", &column);

    //adicionando blank na leitura, para evitar bugs
    scanf(" %c", &t);

    //input array bi
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }

    //output
    printf("%.1lf\n", SumOrAverage(column, t, m));

    return 0;
}

double SumOrAverage(int column, char t, double m[SIZE][SIZE])
{
    double result = 0;
    double sum = 0;

    //sum
    if (t == 'S')
    {
        for (int i = 0; i < SIZE; i++)
        {
            //calc sum
            result += m[i][column];
        }
    }
    else if (t == 'M') //averege
    {
        for (int i = 0; i < SIZE; i++)
        {
            //calc sum all
            sum += m[i][column];

            //calc averege
            result = sum/SIZE;
        }
    }

    return result;
}