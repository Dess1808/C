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

*/

#include<stdio.h>
//#include<math.h> //clang inutil nao pega

#define SIZE 3

double *Decrescente(double *abc, int s);

int main(void)
{
    //variveis de controls
    double abc[SIZE];
    double copyAbc[SIZE];

    //inciando com 1 para nao zerar a multiplicacao
    double a2 = 1;
    double b2 = 1;
    double c2 = 1;

    //verificar!!!!
    //variaveis normais
    double a;
    double b;
    double c;

    //input 
    scanf("%lf %lf %lf", &a, &b, &c);

    //add ao array de doubles
    abc[0] = a; 
    abc[1] = b; 
    abc[2] = c; 

    //copy
    for(int i = 0; i < SIZE; i++)
    {
        copyAbc[i] = abc[i];
    }

    //ordenando
    double *ordenado = Decrescente(abc, SIZE);

    double a = ordenado[0];
    double b = ordenado[1];
    double c = ordenado[2];

    //elevando ao quadrado na forca bruta
    for(int i = 0; i < 2; i++)
    {
        a2 *= a;
        b2 *= b;
        c2 *= c;
    }

    //copy
    for(int j = 0; j < SIZE; j++)
    {
        printf("%.1lf", copyAbc[j]);
    }

    putchar('\n');

    //ordenado
    for(int j = 0; j < SIZE; j++)
    {
        printf("%.1lf", ordenado[j]);
    }

    putchar('\n');

    //valores quadrados
    printf("%.1lf %.1lf %.1lf\n", a2, b2, c2);


    //classificando os triangulo
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