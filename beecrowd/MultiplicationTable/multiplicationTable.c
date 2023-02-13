#include<stdio.h>

int main(void)
{
    //variable control
    int n = 0;

    //input 
    scanf("%d", &n);

    //output
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, n, i * n);
    }

    return 0;
}