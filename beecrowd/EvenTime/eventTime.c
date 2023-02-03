#include<stdoi.h>

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
    scanf("%d", &dayStart);
    scanf("%d%d%d", &hourStart, &minuteStart, &secondStart);

    //input end
    scanf("%d", &dayEnd);
    scanf("%d%d%d", &hourEnd, &minuteEnd, &secondEnd);



    //output
    printf("%d dia(s)\n", dayFinal);
    printf("%d Hora(s)\n%d minuto(s)\n%d segundo(s)\n", hourFinal, minutefinal, secondFinal);

    return 0; 
}