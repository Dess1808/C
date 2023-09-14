/*
    Devolva o numero de caracteres alfabeticos em S
*/

#include<stdio.h>
#include<ctype.h>

int strcounta(char *s);

int main(int argc, char const *argv[])
{
    char string[100];

    //input
    scanf("%[^\n]", string);

    //output
    printf("%d\n", strcounta(string));

    return 0;
}


int strcounta(char *s)
{
    int countChar = 0;

    for(int i = 0; s[i] != '\0'; i++)
    {
        //so entra se for alfabetico
        if(isalpha(s[i]))
            countChar++;
    }

    return countChar;
}