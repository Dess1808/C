/**
 *  return 1 se houver a ocorrencia do caracter 
 *      senao 
 *          return -1
*/

#include<stdio.h>

int IdentifierChar(char *f, char l);

int main(void)
{
    //control variable
    char *phrase;
    char letter;

    //input frase
    scanf("%s", phrase);

    //input letter
    scanf("%c", &letter);

    //output
    printf("%d\n", IdentifierChar(phrase, letter));

    return 0;
}

int IdentifierChar(char *f, char l)
{
    //continuar   
}