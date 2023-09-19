/**
 * problema: 
 * Substituir todos os caracteres da string por espacos em branco
 * 
 * exemplo:
 * for (int i = 0; i < n; i++)
 *      string[i] = ' ';
 * 
*/

#include<stdio.h>
#include<string.h>

int main(void)
{
    char string[] = "minha frase";

    for (int i = 0, n = strlen(string); i < n; i++)
        string[i] = '@';
    
    //output 
    printf("%s\n", string);
}

