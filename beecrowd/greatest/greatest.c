#include<stdio.h>

int Greatest(int a, int b, int c);
int MaiorAB(int a, int b);
int Abs(int a, int b);

int main(void)
{
    int a, b, c;

    printf("a: "); scanf("%d", &a);
    printf("b: "); scanf("%d", &b);
    printf("c: "); scanf("%d", &c);

    printf("%d eh o maior\n", Greatest(a, b, c));
}

int Greatest(int a, int b, int c)
{
    int ab = MaiorAB(a, b);
    return MaiorAB(ab, c);
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