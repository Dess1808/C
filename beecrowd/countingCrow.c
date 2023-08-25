#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const int SIZEDEFAULT = 8;


int main(void)
{
    //input variables
    char inputString[SIZEDEFAULT];
    char caw_caw[] = "caw caw";
 
    while(1)
    {
        //input
        scanf(" %[^\n]", inputString);
        fflush(stdin);

        //make control
        if (strcmp(inputString, caw_caw))
        {
            //somando valores
        }
        else
        {
            //mostrando valores e encerrando o programa
            break;
        }
        
    }
    
    return 0;
}