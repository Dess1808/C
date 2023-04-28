/*
    imprimir na diagonal
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

    do
    {
        //reset variables
        newSize = 0;

        //input n
        scanf("%d", &n);

        //matrix create
        int matrix[n][n];

        //control condition
        
        //manipular index de forma matematica

        //repetition main
        for (int i = 0; i < newSize; i++) //line
        {
            for (int j = 0; j < newSize; i++) //column
            {
                matrix[linePosition][columnPosition] = value;
            }
        }


        control++;
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