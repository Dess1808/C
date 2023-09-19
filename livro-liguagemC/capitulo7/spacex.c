/*
    3.5
    char *spacex(char *s)

    problema: Coloca um espaco depois de cada NÃO ESPAÇO  na string s


    hipotese: teste para validação de espaco, se houver, não adicionar espaço, se não houver, adicionar espaço

    exemplo:
    #include<ctype.h> //utilizar a função isspace()

    char const ESPACO = ' ';

    //sempre pecorrer o vetor
    for (int i = 0, n = strlen(string); i < n; i++)
    {
        novaString[k] = string[i];

        if (isspace(novaString[k])) //tem espacos em brano
            //next valeu
            k++;
        else  //sem espacos em braco
            novaString[++k] = ESPACO;
            
            //next value
            k++;
    }

*/


#include<stdio.h>
#include<ctype.h>
#include<string.h>

char const SPACE = '_';

int main(void)
{
    //controle variable
    char string[100];
   
    //input
    scanf("%[^\n]", string);    

    //strin with wh
    char newString[strlen(string) * 2];

    //index of newString
    int k = 0;

    for (int i = 0, n = strlen(string); i < n; i++)
    {
        newString[k] = string[i];

        if (isspace(newString[k]))
        {
            //next value
            k++;
        }
        else 
        {
            newString[++k] = SPACE;
            
            //next value
            k++;
        }
    }

    //end string
    newString[k-1] = '\0';

    //output
    printf("%s\n", newString);

    return 0; 
}


