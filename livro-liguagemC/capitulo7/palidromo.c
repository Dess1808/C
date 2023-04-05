/**
 * palimodro: verificar se array pode ser lido nos dois sentidos
 * 
 * percorrer de traz para frente e de frente para traz ao mesmo tempo
 * 
*/

#include<stdio.h>
#include<string.h>

int strPalidrome(char *p);

int main(void)
{
    //control variable 
    char *phrase;

    //inupt 
    scanf("%s", phrase);

    //output
    if (strPalidrome(phrase))
        printf("Palidromo\n");
    else 
        printf("nao eh palidromo\n");

    return 0;
}


int strPalidrome(char *p)
{
    //testar de frente para tra e de traz para frente
    //obter o tamanho da string -1 para que o valor null '/0' seja contabilizado 
    for (int i = 0, j = strlen(p) - 1; i < j; i++, j--) 
    {
        if (p[i] != p[j])//caracter por caracter
            return 0;
    }      

    return 1;
}
