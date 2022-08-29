#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define QUANTIDADE_GRADE 49

//grade numero aleatorio
int main(void)
{  
    int n = get_int("Quantos números quer apostar (1 - 10)");

    //chamando a função para gerar um vetor de aleatorios, como retorn um vetor????
    int returnVectorHash = randomSequence(n);

    //imprimindo na tela, 
    //preciso saber o tamanho do vetor e coloca-lo de forma dinamica, verificar!!!!
    // for(int i = 0; i < 6; i++)
    // {
    //     printf("%d ", returnVectorHash[i]);
    // }

    printf("\n");

    return 0;
}


int randomSequence(int n)
{
    //colocando o valor n (quantidade de numeros) em uma const para deixar seguro
    const int DIMENSAO = n;

    //criando o vetor com a DIMENSAO inserida
    int vectorHash[DIMENSAO];

    //gerando inicilizador aleatorio
    srand(time(NULL));

    //iniciando o vetor de aleatorio 
    for(int i=0; i < DIMENSAO; i++)
    {
        vectorHash[i] = rand() % QUANTIDADE_GRADE;
    }

    return vectorHash;
}