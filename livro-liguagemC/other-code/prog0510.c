#include<stdio.h>
#include<cs50.h>

/*
    escreva uma função que transforma qualquer caracter na maiscula 
    correspondente (prog0510)
*/

char upperFunction(char ch);

int main(void)
{
    char c = getchar();

    printf("%c\n", upperFunction(c));
}

char upperFunction(char ch)
{
    //to upper
    if((ch >= 97 && ch <= 122))
    {
        return (ch - 32);
    }
    else if((ch >= 65 && ch <= 90))
    {
        return ch;
    }
    else
    {
        return 0;
    }
}