#include<stdio.h>
//rand() e srand() funcionar
#include<stdlib.h>  
//e necessario um count automatico
#include<time.h>

//controles
#define RAND 20
#define QUANTIDADE 100

int main(void)
{
    /*
        srand(time(NULL)) time(NULL) sempre gera um valor aleatorio pos e um lib que contactar o logicio da maquina e calcula o total de segundos passados 
        deste de 1 de janeiro de 1970 ate a data atual.???
    */

   //gerando um numero aleatorio em c utilizando o time(NULL)
   srand(time(NULL));

   //imprimindo sequencia em tela
   for(int i = 0; i < RAND; i++)
   {
       //o rand() identifica sozinho o valor que ele precisa???
       printf("%d ", rand() % QUANTIDADE);
   }

    putchar('\n');

    return 0;
}