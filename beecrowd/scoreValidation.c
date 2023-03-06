/*
    logic main:
    loop enquanto dois valores validos nao forem inseridos
    parametros (0.0 - 10.0) continue rodando enquanto esses valores nao forem contemplados

    obs: se inserir uma valor invalido, resetar a leitura ou apenas pedir um novo numero
*/

#include<stdio.h>

int main(void)
{
    float n1 = 0;
    float n2 = 0;

    while(1)
    {
        scanf("%f", &n1);

        if ((n1 >= 0.0) && (n1 <= 10.0))
        {
            while(1)
            {
                //nota 2
                scanf("%f", &n2);

                if ((n2 >= 0.0) && (n2 <= 10.0))
                {
                    //calcular nota
                    printf("media = %.2f\n", ((n1 + n2) / 2));
                    return 0;
                }
                else 
                {
                    printf("nota invalida\n");
                }
            }
        }
        else 
        {
            printf("nota invalida\n");
        }
    }
}


