#include<stdio.h>

#define DIM 3
#define ESPACO ' '

//iniciador da matriz velha, preenchendo com espaços em brancos
void start(char s[][DIM])
{
    for(int i = 0; i < DIM; i++)
        for(int j = 0; j < DIM; j++)
            s[i][j] = ESPACO;
}

//printando na tela quando chamada
void show(char s[DIM][DIM])
{
    for(int i = 0; i < DIM; i++)
    {
        for(int j = 0; j < DIM; j++)
            printf("%c %c", s[i][j], j==DIM-1?' ':'|');
        if(i!=DIM-1)
            printf("\n---------");
        putchar('\n');
    }
}

int main(void)
{
    char velha[DIM][DIM];
    int posx, posy;
    char ch = 'O'; //Caractere para jogar
    int nJogadas = 0;

    start(velha);
    while(1)
    {
        show(velha);
        printf("\nIntroduza a Posição de Jogo Linha Coluna: ");
        scanf("%d %d", &posx, &posy);
        posx--;posy--;//Pois o indicadores da matriz começão com zero
        if(velha[posx][posy] == ESPACO)
        {
            //utilizar uma condição para trocar os estados das jogadas
            velha[posx][posy] = ch = (ch == 'O') ? 'X' : 'O';
            nJogadas++;
        }
        else
        {
            printf("Posição já ocupada\nJogue Novamente!\n");
        }
        if(nJogadas == DIM*DIM)
            break; //acabar o programa
    }

    show(velha);
}