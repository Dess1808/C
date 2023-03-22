#include<stdio.h>

int main(void)
{
    //control variable
    int n = 0;

    //input 
    scanf("%d", &n);

    //obtento o valor de n para calcular
    int factorial = n;

    //factorial repetition
    for (int i = 0, a = n - 1; i < a; i++)
    {
        factorial *= (n - 1);
        n--;
    }

    //output
    printf("%d\n", factorial);

    return 0;
}