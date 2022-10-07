#include<stdio.h>
#include<string.h>
#include<cs50.h>

//solução 1

char *strConcat(char *origin, char *dest, char *destFull);

int main(void)
{
    string string1 = get_string("string1: ");
    string string2 = get_string("string2: ");

    char stringFull[(strlen(string1) + strlen(string2))];

    char *resultado = strConcat(string1, string2, stringFull);

    printf("%s\n", resultado);
    return 0;
}

char *strConcat(char *origin, char *dest, char *destFull)
{
    int i = 0;
    int j = 0;
    int len = 0;
    int n = 0;

    for(j = 0, n = strlen(origin); j < n; j++)
        destFull[j] = origin[j];

    for(i = 0, len = strlen(origin); dest[i]; i++, len++)
        destFull[len] = dest[i];
    
    destFull[len] = '\0';

    return destFull;
}
