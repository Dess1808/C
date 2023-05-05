/*
     - cada valor da matrix sera ele mesmo multiplicado por 2

     - apartir da segunda linha o primeiro valor do index 0 sera o segunda valor da linha anterior
*/

#include<stdio.h>

void Show(int n, int matrix[n][n]);

int main(void)
{
    //control variable
    int n = 0; 
    int value = 0;
    int valueAux = 0;
    int tabulation = 0;

    while(1)
    {
        //reset variable
        value = 1;
        valueAux = 0;
        tabulation = 0;

        //input
        scanf("%d", &n);

        //create array bidmensional
        int matrix[n][n];

        //end loop 
        if (n == 0)
            break;

        //matrix double
        for (int i = 0, size = n; i < size; i++)//row
        {
            for (int j = 0, size = n; j < size; j++) //column
            {
                matrix[i][j] = value;

                value *= 2;

                //second value
                if (j == 1)
                    valueAux = value;
            }

            //update value with second value
            value = valueAux;
        }

        //for tabulation
    
        //output
        Show(n, matrix);
    }

    return 0;
}

void Show(int n, int matrix[n][n])
{
    for (int i = 0, size = n; i < size; i++)//row
    {
        for (int j = 0, size = n; j < size; j++) //column
        {   
            printf("%*d", matrix[i][j]);
        }
    }
}

