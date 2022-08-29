/*
    CONTROLANDO E OCORRENCIA DE 0 + NUMERO REPETIDO
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<cs50.h>

#define DIMENSAO_VETOR 5
#define QUANTIDADE_RAND 49

int main(void)
{
    int indexAtual = 0;

    int vetorControle[DIMENSAO_VETOR];

    //percorrendo e verificando
    do
    {

        //controlando o 0
        do
        {
            vetorControle[indexAtual] = get_int("insira um valor inteiro positivo: ");
        }
        while(vetorControle[indexAtual] == 0);


        //aqui esta o erro!!!
        if(indexAtual > 0)
        {
            //reset de controle
            int controle = 0;

            //verificando cada um do valor no array
            for(int countIndex = 0; countIndex < indexAtual; countIndex++)
            {
                //verificando se há valores iguais
                if(vetorControle[indexAtual] == vetorControle[countIndex])
                {
                    printf("valor ja inseriu coé menó!\n");
                    controle = 1;
                    break;
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

    //output
    for(int i = 0; i < DIMENSAO_VETOR; i++)
    {
        printf("%d ", vetorControle[i]);
    }

    printf("\n");
}