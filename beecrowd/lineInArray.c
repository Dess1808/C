/*
    []ler 24 numeros e adiciona-los em uma matriz 12 x 12
    []funcao que recebe dois parametros, o numero da linha do array e a operacao que esta sendo solicitada
    []printar a saida do que eh pedido
*/

#include<stdio.h>

//global CONST
const int SIZE = 12;

double SumOrAverage(int line, char t, double m[SIZE][SIZE]);

int main(void)
{
    //controle variable
    double m[SIZE][SIZE];
    int line = 0;
    char t;

    //input option of operation, number of lines and operation in char
    scanf("%d", &line);

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
    printf("%.1lf\n", SumOrAverage(line, t, m));

    return 0;
}

double SumOrAverage(int line, char t, double m[SIZE][SIZE])
{
    double result = 0;
    double sum = 0;

    //sum
    if (t == 'S')
    {
        for (int i = 0; i < SIZE; i++)
        {
            //calc sum
            result += m[line][i];
        }
    }
    else if (t == 'M') //averege
    {
        for (int i = 0; i < SIZE; i++)
        {
            //calc sum all
            sum += m[line][i];

            //calc averege
            result = sum/SIZE;
        }
    }

    return result;
}