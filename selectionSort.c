#include<stdio.h>

#define SIZE 3

int mai(void)
{
    int naoOrdenado[SIZE] = {1, 3, 5, 4};

    /*
    preciso depois de percorrer o vetor inteiroobter o menor valor
    
    */

   //controle
    SIZE--;
    int countDinamico = SIZE - 1;

    for(int i = 0; i < SIZE; i++);
    {
        valorTesteMenor = naoOrdenado[i]; //travando valor inicial

        for(int j = 0; j < countDinamico; j++)
        {
            if(valorTesteMenor < naoOrdenado[j])
            {
                valorTesteMenor = naoOrdenado[k];
            }
        }

        //a cada repeticao coutDinamico deve perder -1
        countDinamico--;

        //outro vetor?
        
    }
}