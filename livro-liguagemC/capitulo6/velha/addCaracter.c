/*
    add um carater manualmente na grade
*/

#include<stdio.h>
#include<cs50.h>
#include<ctype.h>

#define DM 3
#define ESPACO ' '

void ImprimeGrade(char v[DM][DM]);
void GeraGradeLimpa(char v[DM][DM]);

int main(void)
{
    char ch;
    char chUpper;
    char velha[DM][DM];
    int valorLinha = 0;
    int valorColuna = 0;
    bool controleJogada = true;
    bool controleLinhaColuna;

    GeraGradeLimpa(velha);
    
    //imprime grande em branco
    ImprimeGrade(velha);

    putchar('\n');
    putchar('\n');


    do
    {
        //recebendo os valor de posição, poderia fazer teste especificos!!
        controleLinhaColuna = true;
        do
        {
            valorLinha = get_int("linha: ");
            valorColuna = get_int("coluna: ");

            if((valorLinha >= 0 && valorLinha <= 2) && (valorColuna >= 0 && valorColuna <= 2))
            {
                //inseriu os valores corretos
                controleLinhaColuna = false; 
            }
            else
            {
                printf("Linha ou coluna foram inseridos incorretamente!!\ninsira de 0 - 2\n\n");
            }
        } 
        while (controleLinhaColuna); //se continuar verdadeiro, significa que os valores estão errados

        //recebendo os valores X ou O
        do
        {
            ch = get_char("teste - insira \'X\' ou \'O\': ");
            chUpper = toupper(ch);
        } 
        while (chUpper != 'X' && chUpper != 'O');

        
        //teste de ocupação
        if(velha[valorColuna][valorLinha] == ESPACO)
        {
            velha[valorColuna][valorLinha] = ch;
            controleJogada = true;
        }
        else
        {
            printf("local já selecionado!!\n");
            controleJogada = false;
        }
    } 
    while (controleJogada != true);
    
    printf("imprimindo grade atualizada!\n");

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

//preenchendo array com espaços em brancos
void GeraGradeLimpa(char v[DM][DM])
{
    for(int i = 0; i < DM; i++)
      for(int j = 0; j < DM; j++)
         v[i][j] = ' ';
}