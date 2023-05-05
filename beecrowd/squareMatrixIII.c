/*
     - cada valor da matrix sera ele mesmo multiplicado por 2

     - apartir da segunda linha o primeiro valor do index 0 sera o segunda valor da linha anterior

     - para saber a quantidade de digitos apenas divida por 10 e conte quantas vezes foi divido

    - subir para o beecrowd
*/

#include<stdio.h>

void Show(int n, int tabulation,int matrix[n][n]);

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
        tabulation = 1;

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

                //second value
                if (j == 1)
                    valueAux = value;

                //double value
                value *= 2;
            }

            //update value with second value
            value = valueAux;
        }

        //get last value
        int tabulationDiv = matrix[n - 1][n - 1];

        //for tabulation
        while(1)
        {
            tabulationDiv /= 10;

            if (tabulationDiv != 0)
                tabulation++;
            else
                break;
        }
        
        printf("%d\n", tabulation);

        //output
        Show(n, tabulation, matrix);

        putchar('\n');
    }

    return 0;
}

void Show(int n, int tabulation ,int matrix[n][n])
{
    for (int i = 0, size = n; i < size; i++)//row
    {
        for (int j = 0, size = n; j < size; j++) //column
        {   
            if (j == 0)
                printf("%*d",tabulation ,matrix[i][j]);
            else
                printf(" %*d",tabulation ,matrix[i][j]);
        }

        putchar('\n');
    }
}

