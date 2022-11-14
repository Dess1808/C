#include<stdio.h>

int main(void)
{
    int n = 0;

    //input controlado, enquanto não inserir o valor correto
    do
    {
        scanf("%d", &n);
    } while (n < 0 || n > 1000000);

    int valorOriginal = n;
    
    //cedulas 
    int cem = 0; 
    int cinquenta = 0; 
    int vinte = 0;
    int dez = 0; 
    int cinco = 0;
    int dois = 0; 
    int um = 0;

    //decomposição em cédulas
    //cem
    while(n >= 100)
    {
        cem++;
        n -= 100;
    }

    //cinquenta
    while(n >= 50)
    {
        cinquenta++;
        n -= 50;
    }

    //vinte
    while(n >= 20)
    {
        vinte++;
        n -= 20;
    }

    //dez
    while(n >= 10)
    {
        dez++;
        n -= 10;
    }

    //cinco
    while(n >= 5)
    {
        cinco++;
        n -= 5;
    }
    
    //dois
    while(n >= 2)
    {
        dois++;
        n -= 2;
    }

    //um
    while(n >= 1)
    {
        um++;
        n -= 1;
    }

    //output
    printf("%d\n", valorOriginal);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);

    return 0;    
}