#include<stdio.h>
#include<string.h>

char *strCopy(char *orig, char *dest);

int main(void)
{
    char *nome;
    printf("nome: "); scanf("%s", nome);
    
    int sizeNome = strlen(nome);
    char nomeCopy[sizeNome]; //precisa de uma tamanho definido quando for utilizar, tirando a excessão do printf

    char *resultadoNomeCopy = strCopy(nome, nomeCopy);

    printf("%s\n", resultadoNomeCopy);
}

char *strCopy(char *orig, char *dest)
{
    int i = 0;

    for(i = 0; orig[i]; i++)
        dest[i] = orig[i]; //caracter por caracter

    dest[i] = '\0';

    return dest; //retornando uma string
}