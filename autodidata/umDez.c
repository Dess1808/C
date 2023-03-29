/*
    de 1 - 10 de forma recursiva, 

    obs: esse valores foram inseridos na pilha do compilador (stack)
*/

#include<stdio.h>

int Count(int n);

int main(void)
{
    //control variable
    int n = 1;

    Count(n);

    return 0;
}

int Count(int n)
{
    if (n > 10)
        return 1;
    else 
        printf("%d\n", n);
    
    return Count(n + 1);
}