#include<stdio.h>
#include<cs50.h>
#include <ctype.h>

#define DIMENSAO 3

int main(void)
{
   char velhaGrade[DIMENSAO][DIMENSAO]; 
   int linhaValor = 0;

   //preenchendo array
   for(int i = 0; i < DIMENSAO; i++)
      for(int j = 0; j < DIMENSAO; j++)
         velhaGrade[i][j] = ' ';


   //identificação superior das colunas
   printf("  %d %d %d\n", 0, 1, 2);

   //mostrando na tela
   for(int i = 0; i < DIMENSAO; i++)
   {
      for(int j = 0; j < DIMENSAO; j++)
      {
         //identifição lateral da linhas, "poderia ser uma função"
         if(j == 0)
            printf("%d ", linhaValor);

         printf("%c%c", velhaGrade[i][j], j == DIMENSAO-1?' ':'|');
      }

      linhaValor++;
      
      //não queremos que aparece na ultima linha
      if(i != DIMENSAO-1)
      {
         printf("\n  ------\n");
      }
   }

   putchar('\n');
}