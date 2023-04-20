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
    int newSize = 1; //new value first
    int newPosition = SIZE - 1;
    int countNumber = 0;

    /*
        control for index, ira atualizar, rebendo novos valores de newPosition
        controlIndex serve apenas para percorrer o vertor de acordo com newPosition
    */
    int controlIndex = newPosition;

    //sum
    if (o == 'S')
    {
        //start second line
        for (int i = 1; i < SIZE; i++) // line
        {
            for (int j = 0; j < newSize; j++) //column
            {
                sum += m[i][controlIndex];  

                controlIndex++;
            }

            //update controls
            newSize++;
            newPosition--;
            controlIndex = newPosition;
        }
    }
    else if (o == 'M') //averege
    {
        //start second line
        for (int i = 1; i < SIZE; i++) // line
        {
            for (int j = 0; j < newSize; j++) //column
            {
                sum += m[i][controlIndex];

                controlIndex++;

                //count number
                countNumber++;
            }

            //update controls
            newSize++;
            newPosition--;
            controlIndex = newPosition;
        }

        //calc averege
        result = sum / countNumber;
    }

    return result;
}
