#include<stdio.h>

#define ALCOHOL 1
#define GASOLINE 2
#define DIESEL 3
#define END 4

void ShowFuelType(int ac, int gc, int dc);

int main(void)
{
    //control variable
    int alcoholCount = 0;
    int gasolineCount = 0;
    int dieselCount = 0;

    int option = 0;

    while(1)
    {
        scanf("%d", &option);

        switch (option)
        {
        case ALCOHOL:
            alcoholCount += 1;
            break;

        case GASOLINE:
            gasolineCount += 1;
            break;

        case DIESEL:
            dieselCount += 1;
            break;

        case END:
            //output
            ShowFuelType(alcoholCount, gasolineCount, dieselCount);
            return 0;

        default:
            break;
        }
    }
}

void ShowFuelType(int ac, int gc, int dc)
{
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", ac);
    printf("Gasolina: %d\n", gc);
    printf("Diesel: %d\n", dc);
}