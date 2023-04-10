/**
    [x]array ja pronto dos 60 primeiro numero de fibonacci
    [x]comparar esse numero de acordo com a entrada
*/

#include<stdio.h>

int main(void)
{
    //control variable
    int size = 60;
    int t = 0;
    int n = 0;
    long long b = 1;
    long long a = 0;
    long long r = 0;
    long long fibonacciArray[size];
    
    
    //values first 0 & 1
    fibonacciArray[0] = a;
    fibonacciArray[1] = b;

    //start auto fib number, start 2
    for (int i = 2; i <= size; i++)
    {
        r = a + b;
        a = b;
        b = r;

        //atruicao reparada
        fibonacciArray[i] = r;
    }

    //input count
    scanf("%d", &t);

    //input number for test 
    for (int i = 0; i < t; i++)
    {
        //input n
        scanf("%d", &n);

        //test condition
        printf("Fib(%d) = %lld\n", n, fibonacciArray[n]);
    }

    return 0;
}