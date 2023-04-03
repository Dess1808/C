#include<stdio.h>

#define SIZE 100

int main(void)
{
    //control variable
    double a[SIZE];

    //loop for input
    for (int i = 0; i < SIZE; i++)
    {
        //input 
        scanf("%lf", &a[i]);
    }

    //output with condition
    for (int i = 0; i < SIZE; i++)
    {
        if (a[i] <= 10)
            printf("A[%d] = %.1lf\n", i, a[i]);
    }

    return 0;
}