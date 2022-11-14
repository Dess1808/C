#include<stdio.h>
#include<cs50.h>

int MaiorAB(int a, int b);
int Abs(int a, int b);

int main(void)
{
    int n1 = get_int("n1: ");
    int n2 = get_int("n2: ");

    printf("eh o maior %i\n", MaiorAB(n1, n2));
}

int Abs(int a, int b)
{
    int n = a - b;     

    if(n < 0)
        return n *= -1;
    else 
        return n;
}

int MaiorAB(int a, int b)
{
    return (a + b + Abs(a, b)) / 2;
}