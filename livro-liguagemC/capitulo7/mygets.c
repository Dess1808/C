/*
    Implemente a função char *mygets(char *s), que le uma string do teclado e a coloca no
    paramentro da função (isto é, implemente a função gets). A função devera ainda devolver
    a string
*/

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