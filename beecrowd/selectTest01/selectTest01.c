/*
    leia 4 valores inteiros

    se B > C e D > A

    e se soma de D + A > B + C

    C e D positivos

    A par

    valores corretos

    senao

    valores incorretos
*/

#include<stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int n = 0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if((b > c) && (d > a))
    {
        if((c + d) > (a + b))
        {
            if((c > 0) && (d > 0))
            {
                if(a % 2 == 0)
                {
                    printf("Valores aceitos\n");
                }
                else
                {
                    printf("Valores nao aceitos\n");
                }

            }
            else
            {
                printf("Valores nao aceitos\n");
            }

        }
        else
        {
            printf("Valores nao aceitos\n");
        }

    }
    else
    {
        printf("Valores nao aceitos\n");
    }



    return 0;
}
