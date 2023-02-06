#include<stdio.h>

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

    int dayFinal = 0;

    //strings
    char diaStart[4];
    char diaEnd[4];
    char dpIStart[2], dpIIStart[2], dpIEnd[2], dpIIEnd[2];

    //input start
    scanf("%s%d", diaStart, &dayStart);
    scanf("%d%s%d%s%d",&hourStart, dpIStart, &minuteStart, dpIIStart, &secondStart);

    //input end
    scanf("%s%d", diaEnd, &dayEnd);
    scanf("%d%s%d%s%d", &hourEnd, dpIEnd, &minuteEnd, dpIIEnd, &secondEnd);

    //calcular junto com minuto
    int hourDif = ((hourStart * 3600) + (minuteStart * 60) + secondStart) - ((hourEnd * 3600) + (minuteEnd * 60) + secondEnd);
    int minuteDif = ((minuteStart * 60) + secondStart) - ((minuteEnd * 60) + secondEnd);
    int secondDif = secondStart - secondEnd;

    //difference day
    dayFinal = Abs(dayStart - dayEnd);
    if(dayFinal != 0)
        dayFinal -= 1;

    //convertendo
    
    //HOUR
    if(hourDif < 0)
        hourFinal = ((86400 - hourDif) - 86400) / 3600;
    else 
        hourFinal = (86400 - hourDif) / 3600;

    //MINUTE
    if(minuteDif < 0)
        minutefinal = ((3600 - minuteDif) - 3600) / 60;
    else 
        minutefinal = (3600 - minuteDif) / 60;
    
    //SECOND
    if(secondDif < 0)
        secondFinal = (60 - secondDif) - 60;
    else 
        secondFinal = 60 - secondDif;

    //tratamentos horas
    if(hourFinal == 24)
        hourFinal = 0;
    
    if(minutefinal == 60)
        minutefinal = 0;
    
    if(secondFinal == 60)
        secondFinal = 0;
    
    //tratamento de dias
    if((hourFinal == 0) && (minutefinal == 0))
        dayFinal += 1;
    
    //output
    printf("%d dia(s)\n", dayFinal);
    printf("%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", hourFinal, minutefinal, secondFinal);

    return 0; 
}

int Abs(int x)
{
    if(x < 0)
        return x *= -1;
    else 
        return x;
}