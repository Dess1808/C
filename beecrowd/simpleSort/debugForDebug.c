#include<stdio.h>

#define SIZE 3

//informando que estamos retornando uma string de inteiros
int *Ascendente(int *abc, int s);

int main(void)
{
    int arrayAbc[SIZE];
    //int arrayAscendente[SIZE];
    int a, b, c;

    //input
    scanf("%d%d%d", &arrayAbc[0], &arrayAbc[1], &arrayAbc[2]);

    //enviando
    int *arrayOrdenado = Ascendente(arrayAbc, SIZE);

    //output
    for(int k = 0; k < SIZE; k++)
    {
        printf("%d\n", arrayOrdenado[k]);
    }

    return 0;
}

// informar que o retorno e uma string de inteiros? "*" string de interios????
int *Ascendente(int *abc, int s)
{
    int auxiliar = 0;

    s--;
    //rodar mais de uma vez

    for(int i = 0; i < s; i++)
    {
        if(abc[i] > abc[i+1])
        {
            auxiliar = abc[i+1];
            abc[i+1] = abc[i];
            abc[i] = auxiliar;
        }
    }

    return abc;
}
