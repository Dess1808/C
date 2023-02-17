#include<stdio.h>

int main(void)
{
    int password = 2002;
    int inputPassWord = 0;

    while(1)
    {
        //input 
        scanf("%d", &inputPassWord);

        //logic main tests
        if (inputPassWord == password)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else 
        {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}