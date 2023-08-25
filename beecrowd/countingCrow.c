#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const int SIZEDEFAULT = 8;


int main(void)
{
    //input variables
    char inputString[SIZEDEFAULT];
    char caw_caw[] = "caw caw";
    int testValue = 0;
    int control = 0;
 
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