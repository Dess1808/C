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

        if(nome[0] == '\0') //caracter "vazio"
            break;
        else
            printf("nome inserido: %s\n", nome);
        
    }
}