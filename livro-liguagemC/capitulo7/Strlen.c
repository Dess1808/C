#include<stdio.h>

int Strlen(char *s);

int main(int argc, char const *argv[])
{

    char nome[50];

    scanf("%s", nome);

    printf("%d\n", Strlen(nome));

    return 0;
}

int Strlen(char *s)
{
    int i = 0;

    while(s[i] != '\0')
        i++;
    
    return i;
}