/*
    inserido da esquerda para a direita
*/

#include<stdio.h>

void Show(int n, int matrix[n][n]);

int main(void)
{
    //control variable
    int n = 0;
    int newSize = 0;

    //position variables
    int linePosition = 0;
    int columnPosition = 0;
    int value = 0;
    int countControlColumn = 0;
    int controlColumnRight = 0;
    int newSizeRight = 0;
    int newSizeLeft = 0;
    int columnLeft = 0;
    int valueLeft = 0;
    int valueRight = 0;
    int controlValueLeft = 1;
    int columnRight = 0;

    do
    {
        //reset variables
        newSize = 0;
        linePosition = 0;
        columnPosition = 0;
        value = 0;
        countControlColumn = 0;
        newSizeRight = 0;
        newSizeLeft = 0;
        columnLeft = 0;
        valueLeft = 0;
        columnRight = 0;
        valueRight = 1;
        controlValueLeft = 1;
        controlColumnRight = 0;

        //input n
        scanf("%d", &n);

        //matrix create
        int matrix[n][n];

        //atribuitions sizes + start values
        newSize = n;
        newSizeRight = n;
        newSizeLeft = 0;

        //columnLeft, columnRight
        for (int i = 0; i < newSize; i++)//line
        {
            //left
            for (int k = 0; k < newSizeLeft; k++)//column
            {
                matrix[i][columnLeft] = valueLeft;

                columnLeft++;
                valueLeft--;
            }

            //right
            for (int j = 0; j < newSizeRight; j++)//column
            {
                matrix[i][columnRight] = valueRight;

                columnRight++;
                valueRight++;
            }

            //update variables

            //left
            controlValueLeft++;
            valueLeft = controlValueLeft;

            //right
            controlColumnRight++;
            columnRight = controlColumnRight;
            valueRight = 1; //sempre comeca com 1

            //em toda repeticao, columnLeft precisa ser 0
            columnLeft = 0;

            //sizes
            newSizeLeft++;
            newSizeRight--;
        }

        //output matrix
        Show(n, matrix);

        if (n != 0)
            putchar('\n');
    }
    while (n != 0);

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