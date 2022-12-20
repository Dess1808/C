#include<stdio.h>

int main(void)
{
    double n1, n2, n3, n4, nExame;
    int weight = 1 + 2 + 3 + 4;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    //media
    double media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / weight;

    //aprovado direto
    if (media >= 7.0)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    }
    //em exame
    else if ((media >= 5.0) && (media <= 6.9))
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &nExame); //como travar entradas somente de valores numericos

        //nova media
        float mediaExame = (nExame + media) / 2;

        //aprovado no exame
        if (mediaExame >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        //reprovado no exame
        else if (mediaExame <= 4.9)
        {
            printf("Aluno reprovado.\n");
        }

        //mostra media final do exame
        printf("Media final: %.1f\n", mediaExame);
    }
    //reprovado direto
    else
    {
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
    }

    return 0;
}