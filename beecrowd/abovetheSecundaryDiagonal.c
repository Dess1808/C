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
    int newSize = SIZE - 2; //new value first
    int countNumber = 0;

    //sum
    if (o == 'S')
    {
        for (int i = 0; i < SIZE; i++) //line
        {
            for (int j = newSize; j >= 0; j--)//colum
            {   
                sum += m[i][j];
            }   

            //update new size
            newSize--;

            //evitar repeticoes desnessarias
            if (newSize < 0)
                break;
        }
    }
    else if (o == 'M') //averege
    {
        for (int i = 0; i < SIZE; i++) //line
        {
            //condition
            for (int j = newSize; j >= 0; j--) //column
            {
                //calc sum all
                sum += m[i][j];

                //count of numbers
                countNumber++;
            }

            //update new size
            newSize--;

            //evitar repeticoes desnessarias
            if (newSize < 0)
                break;            
        }

        //calc averege
        result = sum / countNumber;
    }

    return result;
}
