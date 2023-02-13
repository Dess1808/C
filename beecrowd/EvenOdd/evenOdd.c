/*
    tres casos (EVEN, ODD, POSITIVE, NEGATIVE & NULL)

    null= 0
*/

#include<stdio.h>

int main(void)
{
    //control variable
    int n = 0;

    //input size
    scanf("%d", &n);

    const int SIZE = n;

    //array from n
    int numbers[SIZE];

    //input number for tests
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    }

    //case tests
    for (int j = 0; j < SIZE; j++)
    {
        //NULL
        if (numbers[j] == 0)
        {
            printf("NULL\n");
        }
        else if ((numbers[j] % 2) == 0) //EVEN POSITIVE and NEGATIVE
        {
            if (numbers[j] > 0)
                printf("EVEN POSITIVE\n");
            else 
                printf("EVEN NEGATIVE\n");
        }
        else if ((numbers[j] % 2) != 0) //ODD POSITIVE and NEGATIVE
        {
            if (numbers[j] > 0)
                printf("ODD POSITIVE\n");
            else 
                printf("ODD NEGATIVE\n");
        }        
    }

    return 0;
}