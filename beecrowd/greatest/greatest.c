#include<stdio.h>
#include<stdlib.h>

int Greatest(int a, int b, int c);
int ValorAbs(int n);
int MaiorAB(int a, int b);

int main(void)
{
    int a, b, c;

    printf("a: "); scanf("%d", &a);
    printf("b: "); scanf("%d", &b);
    printf("c: "); scanf("%d", &c);

    printf("%d eh o maior\n", Greatest(a, b, c));
}

int ValorAbs(int n)
{
    if(n < 0)
        return n *= -1;
    else 
        return n;
}

//verificar se esta retornando certo
int MaiorAB(int a, int b)
{
    return (a + b + ValorAbs(a - b)) / 2;
}

int Greatest(int a, int b, int c)
{
    //return (MaiorAB(MaiorAB(a, b), c) + ValorAbs(ValorAbs(a - b) - c)) / 2;
}