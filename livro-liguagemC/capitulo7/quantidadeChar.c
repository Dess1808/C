#include<stdio.h>

int countChar(char *v);

int main(void)
{
    char vetor[0];

    scanf("%s", vetor);
    printf("%i\n", countChar(vetor));
    printf("%s", vetor); 
}

int countChar(char *v)
{
    int i = 0;

    while(1)
    {
        if(v[i] == '\0') //fim da string no vetor v
            break;

        i++;
    }

    return i;
}