/*
    if((number % 2) != 0)
        printf("%d\n");

    number--

    fazer enquanto numero for >= 1 
*/

#include<stdio.h>

int main(void)
{
    //control variable
    int x = 0;

    //input
    scanf("%d", &x);

    //verification
    if((x >= 1) && (x <= 1000))
    {
        for (int i = 1; i <= x; i++)
        {
            if((i % 2) != 0)
                //output
                printf("%d\n", i);
        }
    }

    return 0;
}