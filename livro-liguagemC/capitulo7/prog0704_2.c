#include<stdio.h>

//debugar

int main(void)
{
    char nome[0];
    int i = 0;
    while(1)
    {
        printf("Nome: ");
        //como inserir um caracter vazio????
        scanf("%s", nome);

        for(int i = 0; nome[i] != '\0'; i++);

        return i;
    }
}