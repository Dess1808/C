/*
    como faco para saber se Sheldon ganhou ou perdou, (sheldon sempre esquerda)

    todas as combinacoes:

    tesoura - papel = tesoura vence! 4 (tesourapapel - tesoura)
    tesoura - lagarto = tesoura vence! 8 (tesouralagarto - tesoura)

    papel - rocha = papel vence! -2
    papel - Spock = papel vence! -3
    
    rocha - lagarto = rocha vence! 6
    rocha - tesoura = rocha vence! -2
    
    lagarto - Spock = lagarto vence! -7
    lagarto - papel = lagarto vence! -4 
    
    Spock - tesoura = Spock vence! -1
    Spock - rocha = Spock vence! 1
    
    palavras iguais = jogo empatado

    fazer teste para as duas combincoes possivel, diverente disso raj ganha

    
*/

#include<stdio.h>
#include<string.h>

int main(void)
{
    //control variable center
    char tesouraPapel[] = "tesourapapel";
    char tesouraLagarto[] = "tesouralagarto";

    char papel[] = "papel";
    char lagarto[] = "lagarto";

    char sheldon[10];
    char raj[10];

    //input
    scanf("%s%s", sheldon, raj);

    char *sheldonRaj = strcat(sheldon, raj);

    if (((strcmp(sheldonRaj, tesouraPapel)) == 0) || ((strcmp(sheldonRaj, tesouraLagarto)) == 0))
        printf("Bazinga!\n");
    else
        printf("Raj trapacou!\n"); 

    return 0;
}