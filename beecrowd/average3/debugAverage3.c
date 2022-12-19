#include<stdio.h>
#include<cs50.h>

float average(float n1, float n2, float n3, float n4, int weight);
float avaregeExame(float nExame, float media);

int main(void)
{
    float n1 = get_float("N1: ");   
    float n2 = get_float("N2: ");   
    float n3 = get_float("N3: ");   
    float n4 = get_float("N4: ");   

    int weight = 1 + 2 + 3 + 4;

    float media = average(n1, n2, n3, n4, weight);

    //aprovado
    if(media >= 7.0)
    {
        printf("Media %.1f\n", media);
        printf("Aluno aprovado");
    }
    else if((media >= 5.0) && (media <= 6.9)) //em exame
    {
        printf("Aluno em Exame\n");
        
        float nExame = get_float("N exame: ");
        float mediaExame = avaregeExame(nExame, media);
        
        if(mediaExame >= 5.0)
        {
            printf("Aluno aprovado\n"); 
        }
        else if(mediaExame <= 4.9)
        {
            printf("Aluno reprovado\n");
        }

        //media final
        printf("Media final: %.1f\n", mediaExame);
    }
    else
    {
        //reprovado games
        printf("Media final: %.1f\n", media)
        printf("Aluno reprovado\n") ;  
    }

    return 0;
    
}

float average(float n1, float n2, float n3, float n4, int weight)
{
    return (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / weight;
}

float avaregeExame(float nExame, float media)
{
    return nExame + media / 2;
}