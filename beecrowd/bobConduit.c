/*
    referencia sobre circulo:
    http://www.uel.br/projetos/matessencial/basico/geometria/circulos.html

    interpretação do problema:
    Vamos considerar dois círculos com raios de 2 cm e 3 cm, respectivamente, como exemplo.
    Para encontrar o menor raio do círculo que circunscreve esses dois círculos, devemos
    primeiro encontrar os pontos de intersecção dos dois círculos e, em seguida, o ponto médio
    da reta que une os centros dos círculos. A distância do ponto médio a qualquer um dos pontos
    de intersecção é o raio do círculo que circunscreve os dois círculos.

    No caso dos círculos com raios 2 cm e 3 cm, os pontos de intersecção são distantes 5 cm
    (a soma dos raios) um do outro. O ponto médio da reta que une os centros dos círculos é o
    ponto (0,5), já que um círculo tem centro (0,0) e o outro tem centro (5,0). Portanto, o
    raio do círculo que circunscreve os dois círculos é 2,5 cm.

    Observe que, neste caso, os dois círculos não são tangentes externamente, portanto,
    o raio mínimo não é alcançado. O menor raio seria atingido somente se os dois círculos
    fossem tangentes externamente, nesse caso o raio do círculo que circunscreve os dois círculos
    seria igual à diferença entre os raios dos dois círculos, ou seja, 1 cm.

    ou seja, para obter o terceiro raio minimo, teria apenas que SOMAR os dois raios ja conhecidos. seria o ponto de
    interseção no caso.
*/

#include<stdio.h>

int main(void)
{
    //control variable
    int t, r1, r2 = 0;

    //input
    scanf("%d", &t);
    
    //calculo with awnser
    for (int i = 0; i < t; i++)
    {
        //input r1 and r2
        scanf("%d%d", &r1, &r2);
        
        printf("%d\n", r1 + r2);
    }
    
    return 0;
}