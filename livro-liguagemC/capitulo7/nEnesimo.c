#include<stdio.h>
#include<string.h>

int main(void)
{
    //controle variable
    char word[100];

    //input
    scanf("%s", word);

    //output
    printf("%c\n", word[strlen(word) - 1]);

    return 0;
}