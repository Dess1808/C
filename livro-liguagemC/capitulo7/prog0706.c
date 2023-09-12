#include<stdio.h>

int strCompara(char *s1, char *s2);

int main(void)
{
    char nome[100];

    do
    {
        //input
        printf("Nome: "); scanf(" %s", nome);

        //output
        printf("%s\n", nome);
    } while (strCompara(nome, "SAIR"));
    
}

int strCompara(char *s1, char *s2)
{
    int i = 0;

    //verdade enquanto caracteres forem iguais
    while((s1[i] == s2[i]) && (s1[i] != '\0'))
        i++;//next
    
    return s1[i] - s2[i];
}