/*
    imprimir em forma de piramide
    a cada preenchida da matriz com size n e feito uma divisao na metade do tamanho, para assim ter uma novo 
    size "mais interno" com isso, preciso atualizar o ponto de partida da matriz mais interna e definir um 
    contador total, para nao ser uma divisao eterna

    start
    0,0
    1,1
    2,2
    3,3
    4,4
    ate mais 100
    100, 100

    coracao da logica, para obter um novo valor de tamanaho pegar size - 2, temos um novo tamanho

*/

#include<stdio.h>

void Show(int n, int matrix[n][n]);

int main(void)
{
    //control variable
    int n = 0;
    int value = 1;
    int linePosition = 0;
    int columnPosition = 0;
    int countSize = 0;
    int newSize = 0;
    int controlLinePosition = 0;
    int controlColumnPosition = 0;

    do
    {
        //reset of variables
        n = 0;
        value = 1;
        linePosition = 0;
        columnPosition = 0;
        countSize = 0;
        newSize = 0;
        controlLinePosition = 0;
        controlColumnPosition = 0;

        scanf("%d", &n);

        //control array bi
        int matrix[n][n];

        //recebendo para ser o novo controlador
        newSize = n;

        while(1)
        {
            //mais internos
            for (int i = 0; i < newSize; i++) //line
            {
                //reset column
                columnPosition = controlColumnPosition;

                for (int j = 0; j < newSize; j++)
                {
                    matrix[linePosition][columnPosition] = value;

                    columnPosition++;
                }

                linePosition++;
            }

            //reset line and column controls
            controlColumnPosition++;
            controlLinePosition++;

            //update for next 
            newSize -= 2;

            //control repetition
            if (newSize <= 0)
            {
                break;
            }
            else 
            {
                linePosition = controlLinePosition;
                columnPosition = controlColumnPosition;
                value++;   
            }
        }
    
        //output
        Show(n, matrix);

        if (n != 0)
            putchar('\n');

    } while (n > 0);
    
    
    return 0;
}

//verificar saida
void Show(int n, int matrix[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                //first line
                printf("%3d", matrix[i][j]);
            }
            else 
            {
                printf("%4d", matrix[i][j]);
            }
        }

        putchar('\n');
    }
}