#include<stdio.h>

char *strdel(char *s, char ch);

int main(void)
{
    char word[20];
    char letter;

    scanf("%s", word);
    scanf(" %c", &letter);

    printf("%s\n", strdel(word, letter));
}

char *strdel(char *s, char ch)
{
    int i, j = 0;

    //desenhar logica!!!!
    for (i=j=0; s[i] != '\0'; i++)
    {
        //sobre escreve a propria string, j e incrementado depois da atribuição
        if(s[i] != ch)
            s[j++] = s[i];
    }

    s[j] = '\0';

    return s;
} 