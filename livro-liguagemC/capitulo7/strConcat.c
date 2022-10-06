#include<stdio.h>
#include<string.h>

char *strConcat(char *origin, char *destiny);

int main(void)
{
    char *string1, *string2;

    printf("string1: "); scanf("%s", string1);
    printf("string2: "); scanf("%s", string2);

    char *resultado = strConcat(string1, string2);

    printf("%s\n", resultado);
    return 0;
}

char *strConcat(char *origin, char *destiny)
{
    int i, j,len;

    //preciso calcular o tamanho de origin para aumentar o size de destiny

    //somando os dois sizes
    int sizeFull = (strlen(origin) + strlen(destiny));

    //size calculado
    char destinyFull[sizeFull];

    //atrinuindo origin
    for(i = 0; origin[i]; i++)
        destinyFull[i] = origin[i];


    //concatenando no final da string destinyFull a string destiny
    for(j = 0, len = strlen(origin); destiny[j]; j++, len++)
        destinyFull[len] = destiny[j];


    destinyFull[len] = '\0';

    //debugar
    return destinyFull;
}