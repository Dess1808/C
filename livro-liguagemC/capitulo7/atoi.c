/**
 * problema:
 * Recebe uma string e devolve o inteiro que nela esta representado
 * 
 * hipotese: tenho que separar em uma outra string os digitos para depois converte-los utilizando a funcao
 * atoi(), porem apenas a primeira ocorrencia de um inteiro, e se caso for encontrado sinal de subtração, deixar o numero 
 * negativo
 * 
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(void)
{
    //control variable
    char s[500];

    //input
    scanf("%s", s);

    int nSize = strlen(s);

    int k = 0;
    char sDigit[nSize];

    //verificação de digitos na sting
    for (int i = 0; i < nSize; i++)
    {
        if (isdigit(s[i]))
        {
            sDigit[k] = s[i];
            k++;
        }
    }    

    //end string
    sDigit[k] = '\0';

    //output
    printf("%d\n", atoi(sDigit));

    return 0;
}

