/*
    Coloca o caracteres ch apenas nas primeiras n posições da string s.
    se n > strlen(s) então n toma o valor de strlen(s)
*/

#include<stdio.h>
#include<string.h>

char *strnset(char *s, char c, int n);

int main(int argc, char const *argv[])
{
    //control variables
    char word[100];
    char ch;
    int numb = 0;

    //input
    scanf("%s", word);
    scanf(" %c", &ch);
    scanf("%d", &numb);

    //output
    printf("%s\n", strnset(word, ch, numb));

    return 0;
}

char *strnset(char *s, char c, int n)
{
    if (n > strlen(s))
        n = strlen(s);

    for (int i = 0; i < n; i++)
        s[i] = c;

    return s;
}