/**
 * 
 * Problema: Função que verificar se string s contem pelo menos um caracter numerico seguido de uma digito. o 
 * primeiro caracter deve ser sempre alfabetico
 * 
 * exemplo
*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void)
{
    //controle variable
    char s[100];

    //input
    scanf("%s", s);

    int nSize = strlen(s);

    for (int i = 0, n = nSize; i < n; i++)
    {
        //primeiro ocorrencia de caracter
        if (isalpha(s[i]))
        {
           //laço para encontrar um digto
           for (int j = i+1, n = nSize; j < n; j++)
           {
                //proxima ocorrencia precisa ser um digito
                if (isdigit(s[j]))
                {

                    //output
                    printf("VERDADE\n");
                    return 0 ;
                }
                else
                {   
                    //output
                    printf("FALSO\n");
                    return 0;
                }
           }

           //se caso for um string de apenas 1 index
           printf("FALSO\n");
        } 
        else
        {
            printf("FALSO\n");
            return 0;
        }  
    }//end for

    return 0;
}