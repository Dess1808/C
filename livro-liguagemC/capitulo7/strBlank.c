/*
  adicionar espacos em branco em uma palavra
*/

#include<stdio.h>
#include<string.h>
#include<cs50.h>

const int SIZE = 100;

void fillNull(char w[SIZE]);
char *strBlank(char *wbl, char *w);


int main(void)
{
    char word[SIZE];

    //fillNUll
    fillNull(word);

    scanf("%s", word);

    int newSize = strlen(word) * 2;
    char wordWithBlank[newSize];

    fillNull(wordWithBlank);

    printf("%s\n", strBlank(wordWithBlank, word));


    putchar('\n');


    return 0;
}

void fillNull(char w[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        w[i] = '\0';
    }
}

char *strBlank(char *wbl, char *w)
{
    int origin, blankPosition = 0;

    //hipotes 1
    for (int i = 0; w[origin] != '\0'; i++)
    {
        wbl[i] = w[origin];

        //skip space blank;
        wbl[++i] = '_';

        //next origin
        origin++;
    }


    //getttin last position
    blankPosition = strlen(wbl);

    //lat position
    wbl[blankPosition - 1] = '\0';

    return wbl;
}