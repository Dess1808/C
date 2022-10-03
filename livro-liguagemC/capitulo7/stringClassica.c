#include<stdio.h>
#include<string.h>

int main(void)
{

    //A diferenca entre "vetor de caracteres" e "string" e simplesmente a adicioção no array de um caracterer delimitador '\0'

    //o compilador se encarrega de colocar o delimitador automaticamente, o "\0"
    char nome1[20+1] = "Gabriel";
    char nome2[20] = {'G','a','b','r','i','e','l'};
    char nome3[] = "Gabriel";
    char *nome4 = "Gabriel"; //isso e ponteiro?? ou uma forma diferente de escrever um vetor??!
    
    //Utiliando o strlen* para verificar a quantidade de caracteres preenchidos no vetor
    for(int i = 0; i < strlen(nome1); i++)
    {
        printf("%c", nome1[i]);
       
    }
    putchar('\n');

    for(int i = 0; i < strlen(nome2); i++)
    {
        printf("%c", nome2[i]);
    }
    putchar('\n');

    for(int i = 0; i < strlen(nome3); i++)
    {
        printf("%c", nome3[i]);
    }
    putchar('\n');

    for(int i = 0; i < strlen(nome4); i++)
    {
        printf("%c", nome4[i]);
    }
    putchar('\n');
}