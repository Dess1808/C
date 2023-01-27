#include<stdio.h>

#define JANUARY 1
#define FEBRUARY 2
#define MARCH 3
#define APRIL 4
#define MAY 5
#define JUNE 6
#define JULY 7
#define AUGUST 8
#define SEPTEMBER 9
#define OCTOBER 10
#define NOVEMBER 11
#define DECEMBER 12

int main(void)
{
    //varible control
    int month = 0;

    //input 
    scanf("%i", &month);

    //selection
    switch (month)
    {
    case JANUARY:
        printf("January\n");
        break;

    case FEBRUARY:
        printf("February\n");
        break;
    
    case MARCH:
        printf("March\n");
        break;
    
    case APRIL:
        printf("April\n");
        break;
    
    case MAY:
        printf("May\n");
        break;
    
    case JUNE:
        printf("June\n");
        break;
    
    case JULY:
        printf("July\n");
        break;
    
    case AUGUST:
        printf("August\n");
        break;

    case SEPTEMBER:
        printf("September\n");
        break;

    case OCTOBER:
        printf("October\n");
        break;
    
    case NOVEMBER:
        printf("November\n");
        break;

    case DECEMBER:
        printf("December\n");
        break;

    default:
        break;
    }

    return 0;
}
