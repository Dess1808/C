/*
    imprimir na diagonal

    posicoes:
    1 - 0,0
    2 - 0,1
    3 - 1,0
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
    int newSizeRight = 0;
    int newSizeLeft = 0;

    do
    {
        //reset variables
        newSize = 0;

        //input n
        scanf("%d", &n);

        //matrix create
        int matrix[n][n];

        //atribuitions sizes
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

                columnPosition++;
                valueRight++;
            }
            
            //update variables
            controlValueLeft++; 
            valueLeft = controlValueLeft;

        }



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