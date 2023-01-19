/*
    verificar primeira se e possivel comparar strings
*/

#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    char model[12];
    char modelTest[] = "vertebrado";
    scanf("%s", model);

    if(strcmp(model, modelTest) == 0)
        printf("%s\n", modelTest);
    else    
        printf("nao sao iguais\n");

    return 0;
}

    