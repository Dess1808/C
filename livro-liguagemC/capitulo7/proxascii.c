/**
 * problema:
 * Coloca em cada posição da string o proximo caracter ascii
 * 
 * hipotese: apenas somar para o proximo ascii
 * 
 * exemplo:
 * for (int i = 0; i < n; i++)
 * {
 *      string[i] += 1;
 * }
*/

#include<stdio.h>
#include<string.h>

int main(void)
{
    char word[] = "A8M0";

    for (int i = 0, n = strlen(word); i < n; i++)
    {
        //soma ele mesmo + 1
        word[i] += 1;
    }   

    //output 
    printf("%s\n", word);
}