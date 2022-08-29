/*
    CODIGO COM BUG
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<cs50.h>

#define DIMENSAO_VETOR 10
#define QUANTIDADE_RAND 49


int main(void)
{

    int vetorAleatorio[DIMENSAO_VETOR];

    srand(time(NULL));

    int indexAtual = 0;

    do
    {
        //valor aleatorio gerado
        vetorAleatorio[indexAtual] = rand() % QUANTIDADE_RAND;

        //preciso checar antes


        //check de index, so entra se index for > 0
        if(indexAtual > 0)
        {
            //reset de controle
            int controle = 0;

            //verificando cada um do valor no array ante então
            for(int countIndex = 0; countIndex < indexAtual; countIndex++)
            {
                if((vetorAleatorio[indexAtual] == vetorAleatorio[countIndex])||(vetorAleatorio[countIndex] == 0))
                {
                    //iguais ou igual a zero, não pode mn
                    controle = 1;
                    break; //vai para onde???
                }
            }

            //verificando controle
            if(controle != 1)
            {
                //posso atualizar o index para um novo numero aleatorio
                indexAtual++;
            }
        }
        else
        {
            indexAtual++;
        }
    }
    while(indexAtual < DIMENSAO_VETOR);

    //array completo
    for(int i = 0; i <  DIMENSAO_VETOR; i++)
    {
        printf("%d ", vetorAleatorio[i]);
    }

    printf("\n");
}


