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
#define ESPACO ' '
#define COUNTJOGADAS 9

void VelhaClean(char v[DM][DM]);
void ImprimeVelha(char v[DM][DM]);
void erro(string menssage);

int main(void)
{
   char velha[DM][DM];
   int count = 0;
   int coluna = 0;
   int linha = 0;
   char jogada = 0;
   char player1Valor;
   char player2Valor;
   bool estadoSalvo = true;
   
   //recebendo o nomes dos players
   string player1 = get_string("Player1: ");
   string player2 = get_string("Player2: ");

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

   //iniciando algumas variavies, utilizando o primeiro player como parametro
   char jogadaMomento = toupper(player1Valor);
   string nomePlayer = player1; 


   //input loop
   while(1)
   {
      //entradas linha, coluna
      //recebe valor
      printf("Vez do jogador %s\n", nomePlayer);
      linha = get_int("linha: ");
      coluna = get_int("coluna: ");

      //testando linha e coluna
      if((linha >= 0 && linha <= 2) && (coluna >= 0 && coluna <= 2))
      {
         //testando espaço em brancos
         if(velha[linha][coluna] == ESPACO)
         {
            //recebendo os valores
            jogada = get_char("Insira sua jogada jogada: ");
            jogada = toupper(jogada);

            //verificar de carecter correto
            if(jogada == jogadaMomento)
            {
               //transforma para upcase
               jogada = toupper(jogada);

               //atribui na matriz 
               velha[linha][coluna] = jogada;

               //imprimir a velha atualizada
               ImprimeVelha(velha);

               /*
                  FAZER O TESTE DE WIN!
               */

               //linhas
               if(jogada == velha[0][0] && jogada == velha[0][1] && jogada == velha[0][2])
               {
                     printf("%c ganhou!\n", jogada );
                     return 0;
               }
               else if(jogada == velha[1][0] && jogada == velha[1][1] && jogada == velha[1][2])
               {
                     printf("%c ganhou!\n", jogada );
                     return 0;
               }
               else if(jogada == velha[2][0] && jogada == velha[2][1] && jogada == velha[2][2])
               {
                     printf("%c ganhou!\n", jogada );
                     return 0;
               }
               else if(jogada == velha[0][0] && jogada == velha[1][0] && jogada == velha[2][0]) //linhas
               {
                     printf("%c ganhou!\n", jogada );
                     return 0;
               }
               else if(jogada == velha[0][1] && jogada == velha[1][1] && jogada == velha[2][1])
               {
                     printf("%c ganhou!\n", jogada );
                     return 0;
               }
               else if(jogada == velha[0][2] && jogada == velha[1][2] && jogada == velha[2][2])
               {
                     printf("%c ganhou!\n", jogada );
                     return 0;
               }
               else if(jogada == velha[2][0] && jogada == velha[1][1] && jogada == velha[0][2]) //cross
               {
                     printf("%c ganhou!\n", jogada );
                     return 0;   
               }
               else if(jogada == velha[0][0] && jogada == velha[1][1] && jogada == velha[2][2])
               {
                     printf("%c ganhou!\n", jogada );
                     return 0;
               }


               //troca o estado da variavel controle "estado", utiliza-se o primeiro player como parametros
               if(estadoSalvo)
               {
                  jogadaMomento = player2Valor;
                  nomePlayer = player2;
                  estadoSalvo = false;
               }
               else
               {
                  jogadaMomento = player1Valor;
                  nomePlayer = player1;
                  estadoSalvo = true;
               }

               //incrementando para a proxima jogada valida
               count++;
            }
            else
            {
               erro("Valor inserido não é do jogador!");
            }
         }  
         else
         {
            erro("Espaço ja selecionado!!");
         }
      }  
      else 
      {
         erro("Linha ou Coluna fora inserido incorretamente!");
      }

      //teste de loop
      if(count >= COUNTJOGADAS)
      {
         printf("Deu Velha!\n");
         break;
      }
   }

   return 0;
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

void erro(string menssage)
{
   printf("%s\n", menssage);
}








