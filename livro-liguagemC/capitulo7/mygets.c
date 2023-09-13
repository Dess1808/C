#include<stdio.h>

//global
char s[100];

char *mygets();

int main(void)
{
    char *nome = mygets();

    printf("%s\n", nome);
}

char *mygets()
{    
    scanf(" %s", s);
    return s;
}