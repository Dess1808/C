/*
    logica principal
    tirar a diferenca entre dias e horas

    rascunho
    24h em segundo 86400s
    60m em segundos 3600s

    8:12:23
    tudo em segundos

    8 - 28.800
    12 - 720
    23 - 23

    743
    29513

    06:13:23

    6 - 21600
    13 - 780
    23 - 23

    803
    22430

    7083

    hora 86400s - 7083s / 3600

    minuto 60 -(-60) / 60

    segundos 23 - 23

    obs: tratamento especial para quando for 24h completas, 1 dia, horas zerdas

    logica principal:
    transformar hora e minuto em segundos das entredas (transformar na menor unidade que eh "segundos") da duas entradas de horas
    tirar a diferenca entre inicio e fim e sair transformando de volta para hora minuto e segundo

    obs: todas a unidade devem ser calculadas em "segundos" para depois serem devidamente transformadas para suas unidades finais

    formula principal horas:
    tirar a diferenca 
        diferencaHora (horaSegundoStart + horaSegundoMinuto + segundosEnd) - (horaSegundoEnd + minutoSegundoEnd + segundoEnd)
        diferencaMinuto (horaSegundoMinuto + segundosEnd) - (minutoSegundoEnd + segundoEnd)
        diferencaSegundos (segundo) - (segundo)
        
        calculando hora 
        calculando minuto
        calculando segundo

    obs: o evento e de apenas 1 mes???
    calcular a quantidade de dias entre os dois dias informados
    valor absoluto entre os dias -1

    OBS:se a diferenca entre horas bater 24h significa e a diferenca entre dias for 0, signfica que bateu somente 1dia
    porem se a diferenca de dias for diferente de 0, siginificao que devo contar mais + dia completo
*/

#include<stdio.h>
#include<cs50.h>

#define HORASEGUNDO 86400
#define MINUTOSEGUNDO 3600

int main(void)
{  
    //variable control
    int dia, hora, minuto, segundo = 0;

    //input
    printf("Dia ");
    scanf("%d", &dia);
    scanf("%d%d%d", &hora, &minuto, &segundo);



    return 0; 
}