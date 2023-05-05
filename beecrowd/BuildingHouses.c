/*
    utilizar regra de 3 para calcular valores

    - enquanto for diferente de 0 continuar lendo inputs, qualquer um dos inputs

    - metros quadrados dos dois valores inseridos

    regra de 3
    80 ---------------- 20%
    x  ---------------- 100%

    //formula principal
    ladoFinal = sqrt(metrosQuadrado * 100 / variavelPorcentagem)

    - valores resultante, tirar raiz quadrada do mesmo
*/

#include<stdio.h>
#include<math.h>

int main(void)
{
    int ladoA, ladoB, porcentagem = 0;

    while(1)
    {
        //input
        scanf("%d", &ladoA);

        //end loop in first input
        if (ladoA == 0)
            break;

        scanf("%d", &ladoB);
        scanf("%d", &porcentagem);

        printf("%d\n", (int)sqrt((ladoA * ladoB) * 100 / porcentagem));
    }
    
    return 0;
}