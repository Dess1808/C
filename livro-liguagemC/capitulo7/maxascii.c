/*
    char *maxAscii(char *s);

    problema: Devolve o caracterer com maior codigo ascii presente na string

    hipotese: percorrer o array alocando um variabel char o caracter mais alto de acordo com seu valor
    decimal

    exemplo:

        maxChar = string[0];

        for (int i = 0, strlen(string); i < n; i++)
        {
            if (maxChar < string[i])
                maxChar = string[i];
        }
*/

#include<stdio.h>
#include<string.h>


int main(void)
{
    //controle variable
    char string[] = "uma frase qualquer{";

    //first value
    char maxChar = string[0];

    for (int i = 0, n = strlen(string); i < n; i++)
    {
        if (maxChar <= string[i])    
            maxChar = string[i];
    }

    //output
    printf("%c\n", maxChar);

    return 0;
}