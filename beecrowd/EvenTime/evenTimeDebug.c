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
        diferencaHora (horaSegundoStart + horaSegundoMinuto + segundosStart) - (horaSegundoEnd + minutoSegundoEnd + segundoEnd)
        diferencaMinuto (horaSegundoMinuto + segundosEnd) - (minutoSegundoEnd + segundoEnd)
        diferencaSegundos (segundo) - (segundo)
        
        calculando hora 
            if(diferencaX < 0)
                xFinal = (HORASEGUNDO - deferencaX) - HORASEGUNDO / valorRelogio;
            else 
                xFinal = HORASEGUNDO - diferencaX / valorRelogio;
    
        calculando minuto
            mesmo calculo
        calculando segundo
            mesmo calculo 
        
    Obs: 
    se hora 24, minuto 60 e segundo 60
    significa que temos um dia completo
        zerar hora, minuto e segundo, e somar a diferenca absoluta de "dias"



    obs: o evento e de apenas 1 mes???
    calcular a quantidade de dias entre os dois dias informados
    valor absoluto entre os dias -1

    OBS: se a diferenca de dias for 0 e a diferenca de horas der 24h, significa que bateu um dia,
    devo zerar as horas e informar apenas os dias
    formula para dia:
    (diaStart - diaEnd) - 1 vai ser a diferenca entre total de dias

    obervacoes: 
*/

#include<stdio.h>

#define HOURINSECOND 3600
#define MINUTESECOND 60
#define SECOND 60
#define TWENTYFOURINSECOND 86400

int Abs(int x);

int main(void)
{  
    //variable control
    int dayStart = 0;
    int hourStart = 0;
    int minuteStart = 0;
    int secondStart = 0;

    int dayEnd = 0;
    int hourEnd = 0;
    int minuteEnd = 0;
    int secondEnd = 0;

    int hourFinal = 0;
    int minutefinal = 0;
    int secondFinal = 0;
    
    //input start
    printf("Dia ");
    scanf("%d", &dayStart);
    scanf("%d%d%d", &hourStart, &minuteStart, &secondStart);

    //input end
    printf("Dia ");
    scanf("%d", &dayEnd);
    scanf("%d%d%d", &hourEnd, &minuteEnd, &secondEnd);

    //obtendo diferenca de hora, minuto e segundo
    int hourDifference = ((hourStart * HOURINSECOND) + (minuteStart * MINUTESECOND) + secondStart) - ((hourEnd * HOURINSECOND) + (minuteEnd * MINUTESECOND) + secondEnd);
    int minuteDifference = ((minuteStart * MINUTESECOND) + secondStart) - ((minuteEnd * MINUTESECOND) + secondEnd);
    int secondDifference = secondStart - secondEnd;

    /*
        CALCULANDO E TRANSFORMANDO (HORA, MINUTO E SEGUNDO)
    */
    //hour
    if(hourDifference < 0)
        hourFinal = ((TWENTYFOURINSECOND - hourDifference) - TWENTYFOURINSECOND) / 3600;
    else 
        hourFinal = (TWENTYFOURINSECOND - hourDifference) / 3600;        

    //minute
    if(minuteDifference < 0)
        minutefinal = ((MINUTESECOND - minuteDifference) - MINUTESECOND) / 60;
    else 
        minutefinal = (MINUTESECOND - minuteDifference) / 60;
    
    //second final
    if(secondDifference < 0)
        secondFinal = (SECOND - secondDifference) - SECOND;
    else 
        secondFinal = SECOND - secondDifference; 

    /*
        VERIFICAR SITUAÇÃO DE HORA, MINUTOS E SEGUNDOS
    */

    if (hourFinal == 24)
        hourFinal = 0;
    
    if (minutefinal == 60)
        minutefinal = 0;

    if (secondFinal == 60)
        secondFinal = 0;


    //calc day final 
    int dayFinal = Abs(dayStart - dayEnd);

    /*feito as diferencas com calculo final, partir para a verificao de valore*/
    printf("%d\n%d\n%d\n", hourFinal, minutefinal, secondFinal);

    return 0; 
}

int Abs(int x)
{
    if(x < 0)
        return x *= -1;
    else 
        return x;
}