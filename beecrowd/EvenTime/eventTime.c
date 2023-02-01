#include<stdio.h>

#define HOURINSECOND 3600
#define MINUTESECOND 60
#define SECOND 60
#define TWENTYFOURINSECOND 86400
#define SIXTYINSECOND 3600

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

    int dayFinal = 0;

    //input start
    //printf("Dia ");
    scanf("%d", &dayStart);
    scanf("%d%d%d", &hourStart, &minuteStart, &secondStart);

    //input end
    //printf("Dia ");
    scanf("%d", &dayEnd);
    scanf("%d%d%d", &hourEnd, &minuteEnd, &secondEnd);

     //obtendo diferenca de hora, minuto e segundo
    int hourDifference = ((hourStart * HOURINSECOND) + (minuteStart * MINUTESECOND) + secondStart) - ((hourEnd * HOURINSECOND) + (minuteEnd * MINUTESECOND) + secondEnd);
    int minuteDifference = ((minuteStart * MINUTESECOND) + secondStart) - ((minuteEnd * MINUTESECOND) + secondEnd);
    int secondDifference = secondStart - secondEnd;

    //differences
    //hour
    if(hourDifference < 0)
        hourFinal = ((TWENTYFOURINSECOND - hourDifference) - TWENTYFOURINSECOND) / 3600;
    else 
        hourFinal = (TWENTYFOURINSECOND - hourDifference) / 3600;       

    //minute
    if(minuteDifference < 0)
        minutefinal = ((SIXTYINSECOND - minuteDifference) - SIXTYINSECOND) / 60;
    else 
        minutefinal = (SIXTYINSECOND - minuteDifference) / 60;
    
    //second final
    if(secondDifference < 0)
        secondFinal = (SECOND - secondDifference) - SECOND;
    else 
        secondFinal = SECOND - secondDifference;

    //hora verification
    if (hourFinal == 24)
        hourFinal = 0;
    
    //minute verification 
    if (minutefinal == 60)
        minutefinal = 0;

    //second verification
    if (secondFinal == 60)
        secondFinal = 0;   

    //calc day
    if(dayStart > dayEnd)
        dayFinal = dayStart - dayEnd;
    else 
        dayFinal = dayEnd - dayStart;
        
    //resolvendo diferenca de dias
    if (dayFinal != 0) 
        dayFinal--;

    //add + um dia se em horas der 24h
    if ((hourFinal == 0) && (minutefinal == 0) && (secondFinal == 0))
        dayFinal++;

    //output
    printf("%d dia(s)\n", dayFinal);
    printf("%d Hora(s)\n%d minuto(s)\n%d segundo(s)\n", hourFinal, minutefinal, secondFinal);

    return 0; 
}