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
    int newSize = 1;
    int countNumber = 0;


    //sum
    if (o == 'S')
    {
        for (int i = 1; i < SIZE; i++) //line
        {
            for (int j = 0; j < newSize; j++)//colum
            {   
                sum += m[i][j];
            }   

            //update new size
            newSize++;
        }
    }
    else if (o == 'M') //averege
    {
        for (int i = 1; i < SIZE; i++) //line
        {
            //condition
            for (int j = 0; j < newSize; j++) //column
            {
                //calc sum all
                sum += m[i][j];

                //count of numbers
                countNumber++;
            }

            //update new size
            newSize++;
        }

        //calc averege
        result = sum / countNumber;
    }

    return result;
}
