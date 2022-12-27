#include<stdio.h>

/*
    Q1: x&y (0.1 -- 20.0) (ambos precisam esta nesta faixa)
    Q2: x (0.1 - 20.0) & y (-0.1 -- -20.0) 
    Q3: x (-0.1 -- -20.0) & y(-0.1 -- -20.0)
    Q4: x (0.1 -- 20.0) & y(-0.1 -- 20.0)

    poderia colocar como variaveis

    se x & y == 0.0 (Origem)
*/

int main(void)
{
    float x, y;

    //preciso tratar a entrada
    scanf("%f %f", &x, &y);

    //selecao de coordenadas
    //origem

    //precisa ser ponto flutuante
    if((x == 0.0) && (y == 0.0))
    {
        printf("Origem\n");
    }
    //Q1
    else if(((x >= 0.0) && (x <= 20.0)) && ((y >= 0.1) && (y <= 20.0))) 
    {
        printf("Q1\n");
    }
    //Q2
    else if(((x >= 0.0) && (x <= 20.0)) && ((y >= -0.1) && (y <= -20.0))) 
    {
        printf("Q2\n");
    }
    //Q3
    else if(((x >= - 0.0) && (x <= -20.0)) && ((y >= -0.1) && (y <= -20.0)))
    {  
        printf("Q3\n");
    } 
    else if(((x >= 0.0) && (x <= 20.0)) && ((y >= - 0.1) && (y <= -20.0)))
    {
        printf("Q4\n");
    }
    else 
    {
        printf("fora do intervalo\n");
    }


    return 0;
}