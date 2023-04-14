#include<stdio.h>

int main(void)
{
    char nome[7] = {'G', 'a', 'b', 'r', 'i', 'e', 'l'};
    char letra = 'H';
    //char letra[1] = 'a'; nao faz sentido

    for (int i = 0; i < 7; i++)
    {
        printf("%c", nome[i]);
    }

    printf("\n%c\n", letra);

    printf("\n");

    //mais reduzida
    char *nome = "Hoje Vai chover";
    //char nome[] = {'H', 'o', 'j', 'e'....}

    scanf("%s", nome);

    printf("%c\n", nome[6]);

    return 0;
}