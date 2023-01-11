/*
    definir os tipos de triagulos e triagulos enquanto a agulos

    o que e um triangulo?
    triangulo = a < (b + c)

    obs:
    Equilatero - todos os lados iguais
    Isoceles - pelo menos dois iguais
    Scaleno - todos diferentes

    triagulos angulos 
    Retandulo - um agulo e de 90 graus
    Acutangulo - todos os agulos sao agudos, ou seja, todos os agulos sao menores que 90
    Obtusngulo - pelo um angulo e maior que 90

    logica
    ordernar as entradas em ordem decrescente (do maior para o menor)
    testar para ver ser valores formam um triangulo
    se sim
        verificar qual seria o triangulo e o seu angulo
    senao
        output - nao forma triangulo

*/

#include<stdio.h>
//#include<math.h> //clang inutil nao pega

#define SIZE 3

double *Decrescente(double *abc, int s);
double Potencia(int p, double x);

int main(void)
{
    double abc[SIZE];
    double abcCopy[SIZE];   

    //input
    scanf("%lf%lf%lf", &abc[0], &abc[1], &abc[2]);

    //copia do original
    for(int i = 0; i < SIZE; i++)
    {
        abcCopy[i] = abc[i];
    }

    //ordenado
    double *ordenado = Decrescente(abc, SIZE);

    //recebendo ordem correta
    double a = ordenado[0];
    double b = ordenado[1];
    double c = ordenado[2];

    //classificando os triangulo
}

double Potencia(int p, double x)
{
    int resultado = 1;

    for(int i = 0; i < p; i++)
    {
        resultado *= x;
    }

    return resultado;
}

double *Decrescente(double *abc, int s)
{
    int newSize = s - 1;
    int maiorAtual = 0;
    int trocar = 0;
    int ultimaPosicaoMaior = 0;
    int auxiliar = 0;

    for(int i = 0; i < newSize; i++)
    {
        maiorAtual = abc[i];

        for(int j = i + 1; j <= newSize; j++)
        {
            //so executado de for maior
            if(maiorAtual > abc[j])
            {
                maiorAtual = abc[j];
                ultimaPosicaoMaior = j;
                trocar = 1;
            }
        }

        //verificando troca 
        if(trocar)
        {
            auxiliar = abc[i];
            abc[i] = abc[ultimaPosicaoMaior];
            abc[ultimaPosicaoMaior] = auxiliar;

            //controle 
            trocar = 0;
        }
    }

    return abc;
}