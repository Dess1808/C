#include<stdio.h>

//strlen

int countChar(char *v);

int main(void)
{
    char vetor[0];

    scanf("%s", vetor);
    printf("%i\n", countChar(vetor));
    printf("%s\n", vetor); 
}

int countChar(char *v)
{
    int i = 0;

    for(i = 0; v[i]; i++);//nulo e false

    return i;
}