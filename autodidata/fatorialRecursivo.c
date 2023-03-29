#include<stdio.h>
 
int Factorial(int n);

int main(void)
{
    //control variable
    int n = 0;

    //input
    scanf("%d", &n);

    //output with function recursive
    printf("%d factorial is %d\n", n, Factorial(n));

    return 0;
}

//recursive
int Factorial(int n)
{
    if (n == 0)
        return 1;

    return n * Factorial(n - 1);
}