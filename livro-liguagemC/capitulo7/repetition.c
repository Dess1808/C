/*
    uma string recebe o caractere que não se encontram recepetidos
*/

#include<stdio.h>
#include<string.h>

char *repetition(char *w, char *wr);

int main(int argc, char const *argv[])
{
    //control variable
    char word[100];
    char wordReturn[100];

    //input
    scanf("%[^\n]", word);

    //output
    printf("%s\n", repetition(word, wordReturn));

    return 0;
}

char *repetition(char *w, char *wr)
{
    char chCheck;
    int currenIndexReturn = 0;

    //construir logica


    //endstring
    w[currenIndexReturn] = '\0';

    return wr;   
}
