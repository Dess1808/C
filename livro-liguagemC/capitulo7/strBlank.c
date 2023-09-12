/*
  adicionar espacos em branco em uma palavra
*/

#include<stdio.h>
#include<string.h>
#include<cs50.h>

const int SIZE = 100;

char *strBlank(char *wbl, char *w);

int main(void)
{
    char word[SIZE];

    //input
    scanf("%s", word);

    int newSize = (strlen(word) * 2) - 1;

    char wordWithBlank[newSize];

    //debug
    /*
    Detalhe, apenas retornar o array result com o %s o printf
    retorna lixo de memoria, mesmo preenchendo o array para evitar
    isso, 
    */
    char *result = strBlank(wordWithBlank, word);

    //output
    printf("%s\n", result);

    return 0;
}

char *strBlank(char *wbl, char *w)
{
    int origin = 0;
    int blank = 0;

    //gettting new size double
    int sizeBlank = (strlen(w) * 2) - 1;

    //hipotes 1
    for (int i = 0, sizeOrigin = strlen(w); i < sizeOrigin; i++)
    {
        //atribuition
        wbl[blank] = w[i];

        //next space blank
        if (blank < sizeBlank)
        {
            //position space blank
            blank++;

            wbl[blank] = ' ';

            //next number, codition
            blank++;
        }
    }

    //last position
    wbl[sizeBlank] = '\0';

    return wbl;
}