/*
    Faz o mesmo que a função strcpm, mas realiza a comparação ignorando se os caracteres estão em minusculo ou maiuscula

    hipotese:
    pegar as duas strings e deixar em lower case para depois comparar

    obs: ja existe uma função compara com ignore case, mas vamos implementar na raça (stricpm)
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int stricmp(char *s1, char *s2);


int main(int argc, char const *argv[])
{
    //controle variable
    char s1[100];
    char s2[100];

    //input
    scanf("%s", s1);
    scanf("%s", s2);

    if(!stricmp(s1, s2))
        printf("iguais\n");
    else 
        printf("diferentes\n");

    return 0;
}


int stricmp(char *s1, char *s2)
{
    //controle variable
    int i = 0;  

    //lower transformation
    for (int i = 0; s1[i] != '\0'; i++)
        s1[i] = tolower(s1[i]);

    for (int i = 0; s2[i] != '\0'; i++)
        s2[i] = tolower(s2[i]);


    //check
    while((s1[i] == s2[i]) && (s1[i] != '\0'))
        i++; //next index
    
    //0 - iguais, diferente de 0 diferentes, sera calculodo o valores que estão em diferença se caso houver
    return s1[i] - s2[i];

}   

