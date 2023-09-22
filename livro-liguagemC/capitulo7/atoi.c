/**
 * problema:
 * Recebe uma string e devolve o inteiro que nela esta representado
 * 
 * hipotese: tenho que separar em uma outra string os digitos para depois converte-los utilizando a funcao
 * atoi()
 * 
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(void)
{
    //control variable
    char s[] = "gabriel1234souzamart3ins";
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

