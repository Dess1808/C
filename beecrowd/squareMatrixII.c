/*
    imprimir na diagonal
*/

#include<stdio.h>

void Show(int n, int matrix[n][n]);

int main(void)
{
    

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