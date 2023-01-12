/*
    formula principal 
    (a - b) - 24

    printar resultado na tela
        "JOGO DUROU X HORA(S)"
*/

#include<stdio.h>

#define ALLTIME 24

int main(void)
{
    //controle
    int duracaoJogo = 0;
    int a = 0; int b = 0;

    //input
    scanf("%d%d", &a, &b);

    //calculo
    int startEnd = a - b;

    if(startEnd < 0)
        //tirando a diferenca
        duracaoJogo = (ALLTIME - startEnd) - ALLTIME; 
    else 
        duracaoJogo = ALLTIME - startEnd;

    //output
    printf("O JOGO DUROU %d HORA(S)\n", duracaoJogo);

    return 0;    
}
