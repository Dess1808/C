/*
    logica versao 1:
    transformar hora em minutos (x60) eh somar com a entrada de "minuto", das duas entradas de hora, minuto
    tirar a diferenca em os dois
    duracaoMinutos sera o valor absoluto da diferenca
    duracaoHora sera o valor absoluto da diferenca / 60. obs: apenas a parte inteiro

    logica versao 1.2:
*/

//verificar, logica ainda nao bate!!!

#include<stdio.h>
#include<cs50.h>

#define MINUTE 60

int Absolute(int x);

int main(void)
{
    //input and variable inicialization
    int hourStart = get_int("hora inicial: ");
    int minuteStart = get_int("minuto incial: ");
    int hourEnd = get_int("hora final: ");
    int minuteEnd = get_int("minuto final: ");

    //total de horas em minutos
    int totalHourMinutesStart = (hourStart * MINUTE) + minuteStart;
    int totalHourMinutesEnd = (hourEnd * MINUTE) + minuteEnd; 

    //obtendo absolute da diferenca, jah como resultado
    int durationHour = Absolute(totalHourMinutesStart - totalHourMinutesEnd) / 60;
    int durationMinute = Absolute(totalHourMinutesStart - totalHourMinutesEnd);

    //output
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationHour, durationMinute);

    return 0;
}


int Absolute(int x)
{
    if(x < 0)
        return x *= -1;
    else
        return x;
}