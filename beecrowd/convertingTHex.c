/*
    dividiar por 16 até o resultado ser 0, 

    10 - 15
    A - F
*/

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(void)
{   
    int decimal, resultado, resto = 0;
    char hexa;

    //input
    scanf("%d", &decimal);

    //condigo para converter, preciso apresentar de tras pra frente
    while(resultado > 0)
    {
        resultado = decimal / 16;
        resto = decimal % 16;

        //condição de transformação
        if ((resto >= 10) && (resto <= 15)) //substituir por letra
        {
            printf("%c", resto + 55);
        }
        else 
        {
            printf("%d", resto);
        }


    return 0;
}
