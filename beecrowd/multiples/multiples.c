#include<stdio.h>

int main(void)
{
    //variaveis de controle
    int a, b;
    int maior = 0;
    int menor = 0;

    //input 
    scanf("%d%d", &a, &b);

    //defindo o maior
    if (a >= b) 
    {
        maior = a; menor = b;
    }
    else 
    {
        maior = b; menor = a;
    }

    //orgaziando valor para testar
    int resultado = menor * (maior / menor);

    //definindo saidas
    if (resultado == maior)
        printf("Sao Multiplos\n");
    else 
        printf("Nao sao Multiplos\n");
    

    return 0;
}