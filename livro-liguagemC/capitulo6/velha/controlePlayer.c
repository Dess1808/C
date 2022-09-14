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

    //recebendo valores de jogo
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



    //utilizar o valor do jogador 1 como parametro - 'X' ou 'O'
    char jogadaMomento = player1Valor;
    int count = 0;
    int coluna = 0;
    int linha = 0;
    char jogada = 0;
    char vetorFakeNaPosicaoTal;
    string player = player1;
    bool estadoSalvo = true;

    //preciso continuar
    //criar um switch de controle
    while(1)
    {
        //codigo de entrada de estado atual
        //sempre começar com o play1 ou "X"
        //linha, coluna e jogada
        //por enquanto sem restrições
        printf("vez do jogador %s\n", player);
        linha = toupper(get_int("linha: "));
        coluna = toupper(get_int("coluna: "));
        jogada = toupper(get_char("jogada: "));


        //verificador de entrada correta
        if(jogada == jogadaMomento)
        {
            //deve ser feito a atribuição no vetor
            vetorFakeNaPosicaoTal = jogada;

            //troca de variavel "jogadaEstado" utilizando bool
            if(estadoSalvo)
            {
                jogadaMomento = player2Valor;
                player = player2;
                estadoSalvo = false;
            }
            else
            {
                jogadaMomento = player1Valor;
                player = player1;
                estadoSalvo = true;
            }

            count++;
        }
        else
        {
            //informar que o valor inserido não confere com a requição atual
            printf("valor inserido esta errado\n");
        }

        //contador
        if(count >= 9)
        {
            printf("Deu Velha!\n");
            break;
        }

        printf("contador de jogadas: %d\n\n", count);
    }    
}