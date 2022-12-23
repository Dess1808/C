#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    //e se a entrada for em string

    //limitar o que sera utilizado para os calculos, 3 digitos no caso
    char *n;

    scanf("%s",n);
    
    for(int i = 0; i < strlen(n); i++)
    {
        printf("%c ", n[i]);
    }

    printf("\n");

    return 0;
}

