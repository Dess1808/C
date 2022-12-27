#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double n1, n2, n3, n4, nExame;
    int weight = 1 + 2 + 3 + 4;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    //media
    double media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / weight;

    //mostrando a media final
    printf("Media: %.1lf\n", media);

    //aprovado direto
    if (media >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    //em exame
    else if ((media >= 5.0) && (media <= 6.9))
    {
        printf("Aluno em exame.\n");

        //recebendo a nota
        scanf("%lf", &nExame);

        //mostrando a nota do exame
        printf("Nota do exame: %.1lf\n", nExame);

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
        printf("Media final: %.1lf\n", mediaExame);
    }
    //reprovado direto
    else
    {
        printf("Aluno reprovado.\n");
    }

    return 0;
}