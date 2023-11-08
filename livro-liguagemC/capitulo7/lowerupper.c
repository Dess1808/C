/**
 * problema: Recebe uma string de caracteres alfabeticos e coloca todos os caracteres em minusculas, alinhados a esquerda
 * , pela mesma ordem que aparecem. Os que estão em maiusculas são alinhados, pela mesmo ordem, a direita.
*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void)
{
    //control variable
    char s[] = "adRakdslfgjLLlLDdDKDWKDLgS";

    int nSize = strlen(s);
    int i, j = 0;

    int k = nSize - 1;
    
    //new string 
    char newS[nSize];




    


    //output
    printf("%s\n", newS);

    return 0;
}