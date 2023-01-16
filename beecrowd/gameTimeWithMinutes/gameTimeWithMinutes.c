#include<stdio.h>

#define MINUTE 60
#define HORAMINUTO 1440

int main(void)
{
    //controle variaveis entrada
    int hourStart = 0;
    int minuteStart = 0;
    int hourEnd = 0;
    int minuteEnd = 0;

    //controle variaveis fluxo
    int durationHour = 0;
    int durationMinutes = 0;
    int resultadoHoraMinuto = 0;
    int diferencaHoraMinuto = 0;
    int diferencaMinute = 0;

    //input 
    scanf("%d%d%d%d", &hourStart, &minuteStart, &hourEnd, &minuteEnd);

    //diferenca
    diferencaHoraMinuto = ((hourStart * 60) + minuteStart) - ((hourEnd * 60) + minuteEnd);

    //tratando a diferenca por 1440
    if (diferencaHoraMinuto < 0)
        resultadoHoraMinuto = (HORAMINUTO - diferencaHoraMinuto) - HORAMINUTO;
    else 
        resultadoHoraMinuto = HORAMINUTO - diferencaHoraMinuto;

    //obtendo hora convertida
    durationHour = resultadoHoraMinuto / MINUTE;

    //obtendo minuto
    diferencaMinute = minuteStart - minuteEnd;

    if (diferencaMinute < 0)
        durationMinutes = (MINUTE - diferencaMinute) - MINUTE;
    else 
        durationMinutes = MINUTE - diferencaMinute;

    //nao precisamos mostrar 60
    if (durationMinutes == MINUTE)
        durationMinutes = 0;

    //ouput
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationHour, durationMinutes);

    return 0;
}