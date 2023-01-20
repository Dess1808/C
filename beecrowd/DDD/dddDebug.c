/*
    list ddd
    dddBrasilia = 61;
    dddSalvador = 71;
    dddSaoPualo = 11;
    dddRioJaneiro = 21;
    dddJuizFora = 32;
    dddCampinas = 19;
    dddVitoria = 27;
    dddBeloHolizonte = 31;
*/

#include<stdio.h>

#define dddBrasilia 61
#define dddSalvador 71
#define dddSaoPualo 11
#define dddRioJaneiro 21
#define dddJuizFora 32
#define dddCampinas 19
#define dddVitoria 27
#define dddBeloHolizonte 31

int main(void)
{
    int ddd = 0;

    //input
    scanf("%d", &ddd);

    //selection
    switch (ddd)
    {
    case dddBrasilia:
        printf("Brasilia\n");
        break;
    
    case dddSalvador:
        printf("Salvador\n");
        break;
    
    case dddSaoPualo:
        printf("Sao Paulo\n");
        break;  

    case dddRioJaneiro:
        printf("Rio de Janeiro\n");
        break;

    case dddJuizFora:
        printf("Juiz de Fora\n");
        break;
    
    case dddCampinas:
        printf("Campinas\n");
        break;
    
    case dddVitoria:
        printf("Vitoria\n");
        break;
    
    case dddBeloHolizonte:
        printf("Belo Horizonte\n");
        break;

    default:
        printf("DDD nao cadastrado\n");
        break;
    }

    return 0;
}