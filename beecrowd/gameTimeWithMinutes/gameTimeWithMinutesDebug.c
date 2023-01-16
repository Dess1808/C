/*
    logica versao 1: - NAO FUNCIONA
    transformar hora em minutos (x60) eh somar com a entrada de "minuto", das duas entradas de hora, minuto
    tirar a diferenca em os dois
    duracaoMinutos sera o valor absoluto da diferenca
    duracaoHora sera o valor absoluto da diferenca / 60. obs: apenas a parte inteiro

    logica versao 1.2: - NAO FUNCIONA
    se ((horaStart == horaEnd) && (minutoStart > minutoEnd))
        devo calcular somento "minutos", nao chegou a bater 1h
    senao 
        calcular diferenca de horaStart e horaEnd
        calcular diferenca de minutoStart e minutoEnd (obs: se resultado for == a 60, o valor final deve ser 0)

    logica versao 1.3: 
    transformar hora em minutos, somar + minutos e calcular diferenca
    calcular diferenca com 1440 (24h)
    o resultado sera o minutos obs(se > 60, entao, dividir resultado por 60 e o resultado sera o valor em minuto)
    dividir por 60 para obter o valor em hora
    
    Obs: um pouco estranho mais pode funcionar

*/

#include<stdio.h>
#include<cs50.h>

#define MINUTE 60
#define HORAMINUTO 1440

int main(void)
{
    //variable and inicialization
    int hourStart = get_int("hora inicial: ");
    int minuteStart = get_int("minuto inicial: ");
    int hourEnd = get_int("hora final: ");
    int minuteEnd = get_int("minuto final: ");

    //variables control
    int durationHour = 0;
    int durationMinutes = 0;
    int resultadoHoraMinuto = 0;
    int diferencaHoraMinuto = 0;
    int diferencaMinute = 0;

    //diferenca
    diferencaHoraMinuto = ((hourStart * 60) + minuteStart) - ((hourEnd * 60) + minuteEnd);

    //tratando a diferenca por 1440
    if (diferencaHoraMinuto < 0)
        resultadoHoraMinuto = (HORAMINUTO - diferencaHoraMinuto) - HORAMINUTO;
    else 
        resultadoHoraMinuto = HORAMINUTO - diferencaHoraMinuto;

    //obtendo hora convertendo em hora
    durationHour = resultadoHoraMinuto / MINUTE;

    //obtendo minuto
    diferencaMinute = minuteStart - minuteEnd;

    if (diferencaMinute < 0)
        durationMinutes = (MINUTE - diferencaMinute) - MINUTE;
    else 
        durationMinutes = MINUTE - diferencaMinute;

    //ja contou 1h
    if (durationMinutes == MINUTE)
        durationMinutes = 0;

    //ouput
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationHour, durationMinutes);

    return 0;
}

