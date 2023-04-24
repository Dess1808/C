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
    //control variable
    double result = 0;
    double sum = 0;
    int countPosition = 0;
    int newSize = 5;

    //control position variable
    int startPositionLine = 1;
    int startPositionColumn = SIZE - 1;
    int endPosition = 0;

    //sum
    if (o == 'S')
    {
        //first part - come down
        for (int i = startPositionLine; i <= newSize; i++) //line   
        {
            //condition
            for (int j = startPositionColumn; j < SIZE; j++) //column
            {
                //calc sum
                result += m[i][j];
            }

            //new value and control
            //skipando o ultimo incremento
            if (startPositionColumn != 7)
                startPositionColumn--;
        }

        //second part - go up
        //update variable
        startPositionLine = 6;
        newSize = 10;

        for (int i = startPositionLine; i <= newSize; i++) //line   
        {
            //condition
            for (int j = startPositionColumn; j < SIZE; j++) //column
            {
                //calc sum
                result += m[i][j];
            }

            //new value and control
            startPositionColumn++;           
        }

    }
    else if (o == 'M') //averege
    {
        //first part - come down
        for (int i = startPositionLine; i <= newSize; i++)
        {
            //condition
            for (int j = startPositionColumn; j < SIZE; j++) //column
            {
                //calc sum all
                sum += m[i][j];

                //countPosition
                countPosition++;
            }
            //new value and control
            if (startPositionColumn != 7)
                startPositionColumn--;
        }

        //second part - go up
        //update variabels
        startPositionLine = 6;
        newSize = 10;

        for (int i = startPositionLine; i <= newSize; i++)
        {
            //condition
            for (int j = startPositionColumn; j < SIZE; j++) //column
            {
                //calc sum all
                sum += m[i][j];

                //countPosition
                countPosition++;
            }
            //new value and control
            startPositionColumn++;
        }

        //calc averege
        result = sum / countPosition;
    }

    return result;
}
