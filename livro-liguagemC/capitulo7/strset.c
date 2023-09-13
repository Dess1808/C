#include<stdio.h>

char *strset(char *w, char ch);

int main(void)
{
    char word[100];
    char ch;

    scanf(" %s", word);
    scanf(" %c", &ch);

    printf("%s\n", strset(word, ch));

    return 0;
}

char *strset(char *w, char ch)
{
    for(int i = 0; w[i] != '\0'; i++)
        w[i] = ch;
    
    return w;
}