#include<stdio.h>


int main(void)
{
    char nome[50];
    
    printf("nome completo: ");
    
    //perigosa??!! meu compilador "clang" acha isso hahah
    //pelo visto foi descontinuada 
    gets(nome);

    printf("nome completo: %s\n", nome);
}