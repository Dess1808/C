#include<stdio.h>
#include<string.h>

const int SIZE = 100;

char *strCopy(char *orig, char *dest);

int main(void)
{
    char nome[SIZE];
    printf("nome: "); scanf("%s", nome);
    
    int sizeNome = strlen(nome);
    char nomeCopy[sizeNome]; //precisa de uma tamanho definido quando for utilizar, tirando a excessão do printf

    char *resultadoNomeCopy = strCopy(nome, nomeCopy);

    printf("%s\n", resultadoNomeCopy);
}

char *strCopy(char *orig, char *dest)
{
    int i = 0;

    //segunda solução, sem a necessidade de atribuir o '\0' depois do laço
    for(i = strlen(orig); i >= 0; i--)
        dest[i] = orig[i]; //caracter por caracter

    return dest; //retornando uma string
}