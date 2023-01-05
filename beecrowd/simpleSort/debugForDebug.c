#include<stdio.h>

#define SIZE 3

//informando que estamos retornando uma array de inteiros "*"
int *Ascendente(int *abc, int s);

int main(void)
{
    int arrayAbc[SIZE];

    int a, b, c;

    //input
    scanf("%d%d%d", &arrayAbc[0], &arrayAbc[1], &arrayAbc[2]);

    //recebendo arrau ordenado
    int *arrayOrdenado = Ascendente(arrayAbc, SIZE);

    //output
    for (int k = 0; k < SIZE; k++)
    {
        printf("%d\n", arrayOrdenado[k]);
    }

    return 0;
}

// informar que o retorno e uma string de inteiros? "*" string de interios????
int *Ascendente(int *abc, int s)
{
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

        for (int j = i + 1; j < newSize; j++)
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
            abc[ultimaPosicaMenor] = abc[i];

            trocar = 0; //restado;
        }
    }   

    //array ordenado retornado
    return abc;
}
