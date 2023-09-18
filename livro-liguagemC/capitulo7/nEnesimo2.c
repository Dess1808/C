#include<stdio.h>
#include<string.h>

char nEnesimo(char *s, int p);

int main(void)
{
    //controle variable
    char word[100];
    int position = 0;

    //input
    scanf("%s", word);
    scanf("%d", &position);

    //output
    printf("%c\n", nEnesimo(word, position));

    return 0;
}

char nEnesimo(char *s, int p)
{
    return s[p-1];
}