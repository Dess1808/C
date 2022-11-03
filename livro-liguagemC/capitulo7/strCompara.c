#include<stdio.h>
#include<cs50.h>
#include<string.h>

int StrCompara(char *s1, char *s2);

int main(void)
{
    //colocar teste de verificação
    //repetir enquando for inserifo um "/0" & "/b" 
    
    string string1;
    string string2;
    
    //validação de " " e de "\0"
    do
    {
        string1 = get_string("string1: ");
    } 
    while ((string1[0] == '\0') || (string1[0] == ' '));

    do
    {
        string2 = get_string("string2: ");
    } 
    while ((string2[0] == '\0') || (string2[0] == ' '));
    
    

    if(StrCompara(string1, string2) == 0)
        printf("são os mesmos\n");
    else
        printf("não são os mesmos\n");
    
    return 0;
}

int StrCompara(char *s1, char *s2)
{
    
    /*
    evolve um número negativo, se a < b, 
    zero, se a == b, 
    número positivo, se a > b. 
    */

    int s1Size = strlen(s1);
    int s2Size = strlen(s2);

    int controle = 0;

    //primeira versão
    if(s1Size < s2Size)
    {
        return -1;
    }
    else if(s1Size > s2Size)
    {
        return 1;
    }
    else
    {
        //s1 == s2, bit a bit
        for(int i = 0, n = s1Size; i < n; i++)
        {
            if(s1[i] == s2[i])
                controle = 0;
            else 
                controle = 1;
        }

        return controle;
    }
}