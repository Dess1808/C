/*
    login main: (n%i) == 0  
*/

#include<stdio.h>

int main(void)
{
    //control variable 
    int n = 0;

    //input only interger
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if ((n%i) == 0)
            printf("%d\n", i);
    }

    return 0;
}