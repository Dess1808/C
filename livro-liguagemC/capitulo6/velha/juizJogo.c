/*
    validar uma trica!!

    lista de todas as posições de gameover na matriz

    linhas:
    0,0 - 0,1 - 0,2;
    1,0 - 1,1 - 1,2;
    2,0 - 2,1 - 2,2;

    linhas cruzadas:
    2,0 - 1,1 - 0,2
    0,0 - 1,1 - 2,2

    e nessario ter o mesmo carater nas tres posições para ganhar a partida


*/


#include<stdio.h>
#include<cs50.h>

#define DM 3
#define ESPACO ' '
#define COUNTJOGADAS 3

void JuizDoJogos(char v[DM][DM]);
void velhaLimpa(char v[DM][DM]);
void ImprimeGrade(char v[DM][DM]);

int main(void)
{
    char velha[DM][DM];
    char valorJogada;
    int valorLinha = 0;
    int valorColuna = 0;
    int count = 0;

    velhaLimpa(velha);

    do
    {
        //sem tratamento para entradas por enquanto
        valorLinha = get_int("linha: ");
        valorColuna = get_int("coluna: ");
        valorJogada = get_char("letra da jogada: ");

        if(velha[valorLinha][valorColuna] == ESPACO)
        {
            velha[valorLinha][valorColuna] = valorJogada;
            count++;
        }
        else
        {
            printf("local ja selecionado!!\n");
        }
        
    } while (count < COUNTJOGADAS);

    //mandar imprimir
    ImprimeGrade(velha);
    
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