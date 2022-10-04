#include<stdio.h>

int main(void)
{
    char nome[2];
    int numeros[2];

    nome[0] = 'g';
    nome[1] = 'a';

    //printf('%c\n', nome[0]); não funciona! 
    printf("%s", nome);//posso imprimir todos de uma vez como uma string
    putchar('\n');
}