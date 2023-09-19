/**
 * problema: Coloca os caracteres da string alternadamente entre maiusculas e minusculas
 * 
 * hipotese: utilizar a logica de par ou impar para alternar 
 * 
 * exemplo:
 * 
 * for(int i = 0; i < n; i++)
 * {
 *      if((i % 2) == 0)   
 *          string[i] = toupper(string[i]);
 *      else 
 *          string[i] = tolower(string[i]);
 * }
*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void)
{
    //controle variable
    char string[] = "Uma frase qualquer";

    for (int i = 0, n = strlen(string); i < n; i++)
    {
        //teste no index
        if ((i % 2) == 0)
            string[i] = toupper(string[i]);
        else 
            string[i] = tolower(string[i]);
    }

    //output
    printf("%s\n", string);

    return 0;
}