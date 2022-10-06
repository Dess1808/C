#include<stdio.h>
#include<string.h>

int main(void)
{
    //definições diferentes
    char nome[0];
    char *sobreNome;

    //input
    printf("nome: ");
    scanf("%s", nome);

    printf("sobre nome: ");
    scanf("%s", sobreNome);
    
    //string strlen
    int n = strlen(nome);
    int d = strlen(sobreNome); //não esta definido o tamanho????

    //output
    printf("size nome %i\n", n);
    printf("size sobre nome %i\n", d);

    for(int i = 0, n = strlen(nome); i < n; i++)
        printf("%c", nome[i]);
    
    for(int j = 0, n = strlen(sobreNome); j < n; j++)
        printf("%c", sobreNome[j]);
    
    //printf("\n%s\n", sobreNome);
}