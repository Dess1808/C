//versao 1

#include<stdio.h>

#define SIZE 3

int main(void)
{
    int a, b, c;
    int naoOrdenado[SIZE];

    //input
    scanf("%d%d%d", &naoOrdenado[0], &naoOrdenado[1], &naoOrdenado[2]);

    //variaves de controle
    int newSize = SIZE - 1;
    int posicaoUltimoMenor = 0;
    int auxiliar = 0;
    int trocar = 0;
    int menorAtual = 0;

    for (int i = 0; i < newSize; i++)
    {
        //carga inicial
        menorAtual = naoOrdenado[i];

        for (int j = i + 1; j <= newSize; j++)
        {
            if (menorAtual > naoOrdenado[j])
            {
                menorAtual = naoOrdenado[j];
                posicaoUltimoMenor = j; //guardando a posicao do ultimo menor, para trocar

                trocar = 1;
            }
        }

        //so trocar quando realmente houver movimentacao
        if (trocar)
        {
            //troca, apenas quando tiver trocas
            auxiliar = naoOrdenado[i];
            naoOrdenado[i] = naoOrdenado[posicaoUltimoMenor];
            naoOrdenado[posicaoUltimoMenor] = auxiliar;

            trocar = 0;
        }
    }

    //output
    for (int k = 0; k < SIZE; k++)
    {
        printf("%d\n", naoOrdenado[k]);
    }

    return 0;
}