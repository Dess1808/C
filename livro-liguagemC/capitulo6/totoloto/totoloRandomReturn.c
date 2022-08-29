/*
    NÃO EXISTE RETURNO, FUNÇÃO VOID
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<cs50.h>

#define QUANTIDADE_VETOR 10
#define QUANTIDADE_RAND 49

void randomHash(int *v);

int main(void)
{
    int vetorAleatorio[QUANTIDADE_VETOR];

    //gerado de aleatorios
    randomHash(vetorAleatorio);

    for(int i = 0; i <  QUANTIDADE_VETOR; i++)
    {
        printf("%d ", vetorAleatorio[i]);
    }

    printf("\n");
}


//funciona, engraçado! sem retorno
void randomHash(int *v){

    srand(time(NULL));

    for(int j = 0; j < QUANTIDADE_VETOR; j++)
    {
        v[j] = rand() % QUANTIDADE_RAND;
    }
}