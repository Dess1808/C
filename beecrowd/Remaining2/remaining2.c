/*
    comparar com resto == 2
*/

#include<stdio.h>

int main(void)
{
    int n = 0;

    scanf("%d", &n);

    for (int i = 1; i <= 10000 ; i++)
    {
        if ((i % n) == 2)
            printf("%d\n", i);
    }

    return 0;
}