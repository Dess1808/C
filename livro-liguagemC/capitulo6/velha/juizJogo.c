/*
    validar uma trica!!

    lista de todas as posições de gameover na matriz

    linhas:
    0,0 - 0,1 - 0,2;
    1,0 - 1,1 - 1,2;
    2,0 - 2,1 - 2,2;

    coluna
    0,0 - 1,0 - 2,0;
    0,1 - 1,1 - 2,1;
    0,2 - 1,2 - 2,2;

    linhas cruzadas:
    2,0 - 1,1 - 0,2;
    0,0 - 1,1 - 2,2;

    e nessario ter o mesmo carater nas tres posições para ganhar a partida.
*/


#include<stdio.h>
#include<ctype.h>
#include<cs50.h>

#define DM 3
#define ESPACO ' '
#define COUNTJOGADAS 9

void velhaLimpa(char v[DM][DM]);
void ImprimeGrade(char v[DM][DM]);

int main(void)
{
    char velha[DM][DM];
    char valorJogada;
    int valorLinha = 0;
    int valorColuna = 0;
    int count = 0;
    int finalizador = 0;

    velhaLimpa(velha);
    ImprimeGrade(velha);

    do
    {
        //sem tratamento para entradas por enquanto
        valorLinha = get_int("linha: ");
        valorColuna = get_int("coluna: ");

        //testar espaço para adicionar
        if(velha[valorLinha][valorColuna] == ESPACO)
        {
            valorJogada = get_char("letra da jogada: "); 
            valorJogada = toupper(valorJogada);   
            velha[valorLinha][valorColuna] = valorJogada;
            count++;
        }
        else
        {
            printf("local ja selecionado!!\n\n");
        }
        
        //mandar imprimir
        ImprimeGrade(velha);

        //linhas
        if(valorJogada == velha[0][0] && valorJogada == velha[0][1] && valorJogada == velha[0][2])
        {
            printf("%c ganhou!\n", valorJogada );
            return 0;
        }
        else if(valorJogada == velha[1][0] && valorJogada == velha[1][1] && valorJogada == velha[1][2])
        {
            printf("%c ganhou!\n", valorJogada );
            return 0;
        }
        else if(valorJogada == velha[2][0] && valorJogada == velha[2][1] && valorJogada == velha[2][2])
        {
            printf("%c ganhou!\n", valorJogada );
            return 0;
        }
        else if(valorJogada == velha[0][0] && valorJogada == velha[1][0] && valorJogada == velha[2][0]) //linhas
        {
            printf("%c ganhou!\n", valorJogada );
            return 0;
        }
        else if(valorJogada == velha[0][1] && valorJogada == velha[1][1] && valorJogada == velha[2][1])
        {
            printf("%c ganhou!\n", valorJogada );
            return 0;
        }
        else if(valorJogada == velha[0][2] && valorJogada == velha[1][2] && valorJogada == velha[2][2])
        {
            printf("%c ganhou!\n", valorJogada );
            return 0;
        }
        else if(valorJogada == velha[2][0] && valorJogada == velha[1][1] && valorJogada == velha[0][2]) //cross
        {
            printf("%c ganhou!\n", valorJogada );
            return 0;   
        }
        else if(valorJogada == velha[0][0] && valorJogada == velha[1][1] && valorJogada == velha[2][2])
        {
            printf("%c ganhou!\n", valorJogada );
            return 0;
        }

    } while (count < COUNTJOGADAS);

    if(count == COUNTJOGADAS)
        printf("deu velha\n");


    return 0;
}

void ImprimeGrade(char v[DM][DM])
{
    int linhaValor = 0;

    //identificação superior das colunas
    printf("  %d %d %d\n", 0, 1, 2);

    //mostrando na tela
    for(int i = 0; i < DM; i++)
    {
        for(int j = 0; j < DM; j++)
        {
            //identifição lateral da linhas, "poderia ser uma função"
            if(j == 0)
                printf("%d ", linhaValor);

            printf("%c%c", v[i][j], j == DM-1?' ':'|');
        }

        linhaValor++;
        
        //não queremos que aparece na ultima linha
        if(i != DM-1)
        {
            printf("\n  ------\n");
        }
    }

    printf("\n\n");
}

void velhaLimpa(char v[DM][DM])
{
    for(int i = 0; i < DM; i++)
        for(int j = 0; j < DM; j++)
            v[i][j] = ESPACO;
}