#include<stdio.h>

int main(void)
{
    //recebendo o valor
    int age = 0;
    scanf("%i", &age);

    int years = 365;
    int months = 30;
    int days = 5;

    int countYears = 0;
    int countMonths = 0;
    int countDays = 0;

    //years
    while(age >= years)
    {
        countYears++;
        age -= years;
    }
    
    //months
    while(age >= months)
    {
        countMonths++;
        age -= months;
    }

    //days
    //apenas recebendo a sobra
    countDays = age;

    //output
    printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n", countYears, countMonths, countDays);
    
}