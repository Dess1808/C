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

    //quando encontrar o char delimitador '\0' (null) irá sair do laço.
    //ou seja, primeiro e feito a atribuição para depois avaliar a condição, carecter nulo e (false), diferente disso e true
    while((dest[i] = orig[i])) 
        i++;

    return dest; //retornando uma string
}