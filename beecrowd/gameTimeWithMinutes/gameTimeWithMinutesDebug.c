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

*/

#include<stdio.h>
#include<cs50.h>

#define HOUR 24
#define MINUTE 60

int main(void)
{
    //variable and inicialization
    int hourStart = get_int("hora inicial: ");
    int hourEnd = get_int("minuto inicial: ");
    int minuteStart = get_int("minuto final: ");
    int minuteEnd = get_int("minuto final: ");

    int durationHour = 0;
    int durationMinutes = 0;

    //control flux

    //ouput
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationHour, durationMinutes);

    return 0;
}

