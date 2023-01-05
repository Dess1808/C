#include<stdio.h>

#define SIZE 3

int main(void)
{
    int abc[SIZE];
    int abcOld[SIZE];
    int a, b, c;

    //input
    scanf("%d%d%d", &abc[0], &abc[1], &abc[2]);

    //copy
    for (int m = 0; m < SIZE; m++)
    {
        abcOld[m] = abc[m];
    }
    
    //variaveis de controle
    int newSize = SIZE - 1;
    int menorAtual = 0;
    int ultimaPosicaMenor = 0;
    int trocar = 0;
    int auxiliar = 0;

    for (int i = 0; i < newSize; i++)
    {
        //carga inicial
        menorAtual = abc[i];

        for (int j = i + 1; j <= newSize; j++)
        {
            if (menorAtual > abc[j])
            {
                menorAtual = abc[j];
                ultimaPosicaMenor = j;
                trocar = 1; //variavel de controle para troca
            }
        }

        //controle da troca
        if (trocar)
        {
            auxiliar = abc[i];
            abc[i] = menorAtual;
            abc[ultimaPosicaMenor] = auxiliar;

            trocar = 0; //restado;
        }
    }   

    //output
    for (int k = 0; k < SIZE; k++)
    {
        printf("%d\n", abc[k]);
    }

    putchar('\n');

    //output old
    for (int l = 0; l < SIZE; l++)
    {
        printf("%d\n", abcOld[l]);
    }

    return 0;
}