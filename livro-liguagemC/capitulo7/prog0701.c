#include<stdio.h>

int main(void)
{
    char nome[50], sobreNome[50];

    //notas scanf:
    /*
    - As variaveis que recebem a string NUNCA são precididas de &.
    - A função scanf realiza apenas a leitura de uma única palavra.
    */
    printf("Nome: "); 
    scanf("%s", nome);
    printf("Sobre nome: "); 
    scanf("%s", sobreNome);

    printf("%s %s\n", nome, sobreNome);
}