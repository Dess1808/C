#include<stdio.h>

#define COLUMN 4

int main(void)
{
    //input + controle variabel
    int n = 0; scanf("%d", &n);
    int countNumber = 1;

    //rows
    for (int i = 0, rows = n; i < rows; i++)
    {
        //column
        for (int j = 0; j < COLUMN; j++)
        {
            //selection test for word "PUM"
            if (j == (COLUMN - 1))
                printf("PUM");
            else 
                printf("%d ", countNumber);

            countNumber++;    
        }

        //newline
        putchar('\n');
    }

    return 0;
}