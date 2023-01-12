#include<stdio.h>
#include<math.h>

#define SIZE 3

int main(void)
{
    //array de controle
    double abc[SIZE];

    //por enquanto sem tramentento de entrada
    scanf("%lf%lf%lf", &abc[0], &abc[1], &abc[2]);

    //ordenando, ordem decrescente
    int newSize = SIZE - 1;
    int maiorAtual = 0;
    int trocar = 0;
    int ultimaPosicaoMaior = 0;
    int auxiliar = 0;

    for(int i = 0; i < newSize; i++)
    {
        maiorAtual = abc[i];
        for(int j = i + 1; j <= newSize; j++)
        {
            //so executa se menor
            if(maiorAtual < abc[j])
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

    //atribuir a A B C ja ordenado
    double a = abc[0];
    double b = abc[1];
    double c = abc[2];

    //classificar o possivel triangulo
    if(a < (b +c))
    {
        //eh um triangulo

        //definindo quadrados
        double a2 = pow(2,a);
        double b2 = pow(2,b);
        double c2 = pow(2,c);


        //equilatero
        if ((a == b) && (b == c))
        {
            //definicao angulo triangulo equilatero
            //retangulo
            if (a2 == (b2 + c2))
            {
                printf("TRIANGULO RETANGULO\n");
            }
            else if (a2 > (b2 + c2))
            {
                //obtusangulo
                printf("TRIANGULO OBTUSANGULO\n");

            }
            else
            {
                //acutangulo
                printf("TRIANGULO ACUTANGULO\n");

            }
            
            //retangulo
            printf("TRIANGULO EQUILATERO\n");
        }
        else if ((a == b) || (b == c) || (a == c))
        {
            //definicao angulo triangulo isosceles
            //retangulo
            if (a2 == (b2 + c2))
            {
                printf("TRIANGULO RETANGULO\n");
            }
            else if (a2 > (b2 + c2))
            {
                //obtusangulo
                printf("TRIANGULO OBTUSANGULO\n");

            }
            else
            {
                //acutangulo
                printf("TRIANGULO ACUTANGULO\n");

            }

            //output isosceles
            printf("TRIANGULO ISOSCELES\n");
        }
        else 
        {
            //definicao angulo triangulo esca
            //retangulo
            if (a2 == (b2 + c2))
            {
                printf("TRIANGULO RETANGULO\n");
            }
            else if (a2 > (b2 + c2))
            {
                //obtusangulo
                printf("TRIANGULO OBTUSANGULO\n");

            }
            else
            {
                //acutangulo
                printf("TRIANGULO ACUTANGULO\n");

            }
        }
    }
    else 
    {
        //nao triangulo
        printf("NAO FORMA TRIANGULO\n");
    }

    return 0;
}