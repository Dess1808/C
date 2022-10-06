#include<stdio.h>
#include<string.h>

int isNull(char *s);

int main(void)
{
    char *nome = "";

    printf("%d\n", isNull(nome));
}

int isNull(char *s)
{
    return (s[0] == '\0'); //retorna 0 quando estiver com caracter e 1 quando não tiver.
}