#include<stdio.h>

int main(void)
{
    //control variable array 
    int x[10];
    int n = 0;

    //loop for input with condition
    for (int i = 0; i < 10; i++)
    {
        //input
        scanf("%d", &n);

        //replecement condition
        if (n <= 0)
            n = 1;
        
        x[i] = n;
    }

    
    //loop for output
    for (int i = 0; i < 10; i++)
    {
        printf("X[%d] = %d\n", i, x[i]);
    }

    return 0;
}