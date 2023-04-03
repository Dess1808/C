#include<stdio.h>

int main(void)
{
    //control variable
    int x, j = 0;
    int n[10];

    //input 
    scanf("%d", &x);

    //start first position
    n[0] = x;
    
    //loop for calc pow
    for (int i = 1; i <= 10; i++)
    {
        n[i] = n[i-1] * 2;
    }


    //loop for output
    for (int i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }    

    return 0;
}