/*
    https://mundoeducacao.uol.com.br/matematica/multiplos-divisores.htm

    verificar quem e maior
    dividir o maior pelo menor
    fazer cast do resultado para inteiro
    multiplar o resultado pelo menor valor
    testar se o a multiplicacao e igual ao maior valor
    se igual
        os valores sao multiplos
    senao 
        nao sao multiplos 
        
*/

#include<stdio.h>

int MultiplesOrganization(int mr, int mn);

int main(void)
{
    int a, b;
    int maior = 0;
    int menor = 0;

    //input
    scanf("%d%d", &a, &b);

    //organizando quem e maior
    if (a >= b)
    {
        maior = a;
        menor = b;
    }
    else
    {
        maior = b;
        menor = a;
    }

    //obtendo o valor para testar
    int resultado = MultiplesOrganization(maior, menor);

    //definindo saidas
    if (resultado == maior)
    {
        //output multiplos
        printf("%d eh multiplo de %d\n", maior, menor);
    }
    else 
    {
        //output nao multiplos
        printf("%d nao eh multiplo de %d\n", maior, menor);
    }
   
}

int MultiplesOrganization(int mr, int mn)
{
    //definindo a variaveis em inteiro, ja esta executando cast automatico
    int r = 0;

    return r = mn * (mr / mn);
}