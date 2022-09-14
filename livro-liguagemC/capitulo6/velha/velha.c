/*
   faça um jogo da velha jogavel, jogo da velha manual 

   entrada: 
   [x]verificar se o caractere  "x" ou "O"
      - bastar utilizar o tabela ascii para os tais caracteres
      - pode utilizar a lib da cs50 para entreda de caracteres
   
   [x]imprimir uma grade com os com a identificação de letras e numeros. (igual campo minado)
      -criar uma estrategia para colocar identificação na colunas e linhas

   para completar o jogo, vencer ou dá "velha", e necessario que o array em tres posições em sequencia
   estejam preenchidas pelo mesmo caracter!

   rascunhos:
   X - 89 decimal
   O - 79 decimal

   OBS: Sempre utilizar o player1 como paramentro de condição
*/

#include<stdio.h>
#include<ctype.h>
#include<cs50.h>

#define DM 3
#define ESPAÇO ' '
#define COUNTJOGADAS 9


int main(void)
{
   //utilizando o player1 como paramentro principal
   char jogadaMomento = player1Valor;
   int count = 0;
   int coluna = 0;
   int linha = 0;
   char jogada = 0;
   char player1Valor;
   char player2Valor;
   string nomePlayer = player1; 
   string player1;
   string player2;
   bool estadoSalvo = true;


   //recebendo o nomes dos players
   player1 = get_string("Player1: ");
   player2 = get_string("Player2: ");

   //recebendo valores de jogo e definido o jogo
   player1Valor = toupper(get_char("qual letra deseja player %s? ", player1));

   //definindo de forma automatica a letra do segundo player
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


   //inicializando a grande
   VelhaClean(velha);
   ImprimeVelha(velha);

   //input loop
   while(1)
   {
      //entradas linha, coluna e jogada

      //duas etapas de verificação
      //if(velha[linha][coluna] == ESPACO && jogada == jogadaMomento)
   }

void VelhaClean(char v[DM][DM])
{
   for(int i = 0; i < DM; i++)
        for(int j = 0; j < DM; j++)
            v[i][j] = ESPACO;
}


void ImprimeVelha(char v[DM][DM])
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

}







