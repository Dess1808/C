/*
    comparar se strings sao algabeticamente diferentes de acordo com a tabela ascii

    exemplos:
    "abc", "abxpo" - c < x
    "beatriz", "carlos" - b < c
    "carlos", "carla" - o > a
    "maria", "mariana" - string maria alfabeticamente menor
    "ola", "ola" - iguais
*/

//DEBUGAR

#include<stdio.h>
#include<cs50.h>

int strCompara(char *s1, char *s2);

int main(void)
{
    string nome1;
    string nome2;
    string continuar;
    char *yes = "yes";
    char *no = "no";

    do
    {
        scanf("%s", nome1);
        scanf("%s", nome2);

        if (strCompara(nome1, nome2) == 0)
            printf("igual\n");
        else if (strCompara(nome1, nome2) > 0)
            printf("'%s' e maior que '%s'\n", nome1, nome2);
        else  
            printf("'%s' e menor que '%s'\n", nome1, nome2);

        continuar = get_string("continuar? ");

    } while ((continuar == yes) || (continuar == no));
    
}

int strCompara(char *s1, char *s2)
{
    int i = 0;

    //para somente quando s1 e s2 forem diferentes e se a repeticao chegar no final do array
    while((s1[i] == s2[i]) && (s1[i] != '\0'))
        i++;

    //retornar o calculo da diferenca do caracteres (0 - iguais, >0 - s1 > s2, <0 s1 < s2)
    return (s1[i] - s2[i]);  
}
