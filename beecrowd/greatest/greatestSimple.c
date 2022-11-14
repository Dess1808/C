#include<stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    //logica
    //primeira parte
    int absolutoAB = a - b;
    int ab = (a + b + (absolutoAB < 0 ? absolutoAB *= -1 : absolutoAB))/2;

    //segunda parte
    int absolutoABC = ab - c;
    int resultadoMaior = (ab + c + (absolutoABC < 0 ? absolutoABC *= -1 : absolutoABC))/2;

    printf("%d eh o maior\n", resultadoMaior);

    return 0;
}