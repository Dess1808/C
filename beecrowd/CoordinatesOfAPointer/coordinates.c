#include<stdio.h>

int main(void)
{
    //limitadores
    float origem = 0.0;

    float x, y;

    //preciso tratar a entrada
    scanf("%f %f", &x, &y);

    //selecao de coordenadas
    //origem

    //precisa ser ponto flutuante
    if ((x == origem) && (y == origem))
    {
        printf("Origem\n");
    }
    //Q1
    else if ((x > origem) && (y > origem))
    {
        printf("Q1\n");
    }
    //Q2
    else if ((x < origem) && (y > origem))
    {
        printf("Q2\n");
    }
    //Q3
    else if ((x < origem) && (y < origem))
    {
        printf("Q3\n");
    }
    //Q4
    else if ((x > origem) && (y < origem))
    {
        printf("Q4\n");
    }
    //eixos unicos negativos e positivos
    else if (((x > origem) && (y == origem)) || ((x < origem) && (y == origem)) )
    {
        printf("Eixo X\n");
    }
    else 
    {
        printf("Eixo Y\n");
    }


    return 0;
}

