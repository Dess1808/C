#include<stdio.h>
#include<cs50.h>

/*
    recebe um vetor de numeros reais e numero de elementos a considerar, retornar o maior
    número entre os n primeiros elementos de vetor, ou seja, " o maior numero"
*/

float Max(float arrayNumeros[], int tamanho);
void Imprimir(float resultado);

int main(void)
{
    int tamanho = get_int("tamanho: ");
    float arrayNumeros[tamanho];

    for(int i = 0; i < tamanho; i++)
    {
        arrayNumeros[i] = get_float("insira: ");
    }

    float resultado = Max(arrayNumeros, tamanho);
    Imprimir(resultado);

    putchar('\n');
}

float Max(float arrayNumeros[], int tamanho)
{   
    float maior;
    for(int i = 0; i < tamanho; i++)
    {
        if(arrayNumeros[i] >= maior)
            maior = arrayNumeros[i];   
    }

    return maior;
}


void Imprimir(float resultado)
{
    printf("%.2f", resultado);
}
