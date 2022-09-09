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
#define COUNTJOGADAS 3

void JuizDoJogo(char v[DM][DM], bool finalizado);
void velhaLimpa(char v[DM][DM]);
void ImprimeGrade(char v[DM][DM]);

int main(void)
{
    char velha[DM][DM];
    char valorJogada;
    int valorLinha = 0;
    int valorColuna = 0;
    int count = 0;
    bool finalizado = false;

    velhaLimpa(velha);

    do
    {
        //sem tratamento para entradas por enquanto
        valorLinha = get_int("linha: ");
        valorColuna = get_int("coluna: ");

        //testar espaço para adicionar
        if(velha[valorLinha][valorColuna] == ESPACO)
        {
            valorJogada = get_char("letra da jogada: ");    
            velha[valorLinha][valorColuna] = toupper(valorJogada);
            count++;
        }
        else
        {
            printf("local ja selecionado!!\n");
        }
        
        //mandar imprimir
        ImprimeGrade(velha);
        putchar('\n');
        
        JuizDoJogo(velha, finalizado);
        
    } while (count < COUNTJOGADAS || finalizado == false);

    return 0;
}

void JuizDoJogo(char v[DM][DM], bool finalizado)
{
    //preciso testar todas a posições da lista
    //teste de linhas
    //rodar 3 vezes para testar uma linha
    
    /*
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
    */


    //melhorar a logica de verificação do juiz
        
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
}

void velhaLimpa(char v[DM][DM])
{
    for(int i = 0; i < DM; i++)
        for(int j = 0; j < DM; j++)
            v[i][j] = ESPACO;
}