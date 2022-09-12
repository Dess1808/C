/*
    criar uma entrada para nome de player e letra de escolha 'X' ou 'O'
*/

#include<stdio.h>
#include<cs50.h>
#include<ctype.h>

int main(void)
{
    string player1 = get_string("Player1: ");
    string player2 = get_string("Player2: ");

    //valores das jogadas
    char player1Valor = toupper(get_char("qual letra deseja player %s? ", player1));
    char player2Valor;
    
    if(toupper(player1Valor) == 'X')
    {
        printf("%s irá ficar com \'O\'\n", player2);
        player2Valor = 'O';
    }
    else
    {
        printf("%s irá ficar com \'X\'\n", player2);
        player2Valor = 'X';
    }

    printf("%s - %c\n", player1, player1Valor);    
    printf("%s - %c\n", player2, player2Valor);    
}