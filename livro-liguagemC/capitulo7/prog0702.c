#include<stdio.h>

int main(void)
{
    char nome[50];

    printf("nome completo: "); 

    /*
    A função scanf ler todos os caracteres inseridos até encontrar <SPACE>, <TAB> ou <ENTER>. Quando isso acontece
    a função termina a leitura. 
    */
    scanf("%s", nome);

    printf("nome: %s\n", nome);
}