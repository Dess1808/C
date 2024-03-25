// base teoria 
//https://pt.wikipedia.org/wiki/Tri%C3%A2ngulo

//formula simples triangulo |b - c| < a < b + c

/*
    codigo do valor absoluto

    como vou testar todas as possibilidades???

    hipotese 1:
    Faco 4 testes "cbd", "acd", "abd", "abc", o primeiro que confirmar um "triangulo"
    será considerado, diferente disso, não é um triangulo

    uma estrutua de seção simples
    cdb
    acd
    adb
    abc
*/

#include<stdio.h>

int Abs(int b, int c);

int main(void)
{
    int a, b, c, d = 0;

    //intput
    scanf("%d%d%d%d", &a, &b, &c, &d);

    //logic

    //cdb
    if ((Abs(d, b) < c) && (c < (d + b)))
        printf("S\n");
    //acd
    else if ((Abs(c, d) < a) && (a < (c + d)))
        printf("S\n");
    //adb
    else if ((Abs(d, b) < a) && (a < (d + b)))
        printf("S\n");
    //abc
    else if ((Abs(b, c) < a) && (a < (b + c)))
        printf("S\n");
    else 
        printf("N\n");

    return 0;
}

//valor absoluto de dois número
int Abs(int b, int c)
{
    int x = b - c;

    if (x < 0)
        x *= -1;
    
    return x;
}
