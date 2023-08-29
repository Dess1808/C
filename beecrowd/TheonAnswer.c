/*
    conversa de Theon e Ramsay
    https://www.imdb.com/title/tt2178812/characters/nm3701064

    rascunho problema
    multiplar o numero da pessoa selecionada pelo numero selecionado por Ramsay, 
    retornar como output o numero do "torturador" que oferecer MENOS dano

    dano = TheoNumber * RamsayNumber
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    //control varible
    int theon, damage, toturing = 0;

    //input
    scanf("%d", &theon);

    //array ramsay
    int ramsay[theon];
    
    //input ramsay
    for (int i = 0, size = theon; i < size; i++)
    {
        scanf("%d", &ramsay[i]);
    }

    //damage calc
    

    return 0;
}
