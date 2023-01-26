#include<stdio.h>

#define EIGHTP 0.08
#define EIGHTEENP 0.18
#define TWENTYEIGHTP 0.28

void Show(double r);

int main(void)
{
    //variable control
    double salary, result;
    int EightRateDiference = 1000 * EIGHTP;
    int EightTeenRateDiference = 1500 * EIGHTEENP;

    //input
    scanf("%lf", &salary);

    //logic
    if (salary <= 2000.00)
    {
        //incense
        printf("Isento\n");
    }
    else if ((salary >= 2000.01) && (salary <= 3000.00))
    {
        //aplicar %8 do salario
        result = (salary - 2000) * EIGHTP;
        Show(result);
    }
    else if ((salary >= 3000.01) && (salary <= 4500.00))
    {
        //aplicar %18 a resto do salario
        result = EightRateDiference + ((salary - 3000) * EIGHTEENP);
        Show(result);
    }
    else if (salary > 4500)
    {
        //aplica %28 ao resto do salario
        result = (EightRateDiference + EightTeenRateDiference) + ((salary - 4500) * TWENTYEIGHTP);
        Show(result);
    }

    return 0;
}

void Show(double r)
{
    printf("R$ %.2lf\n", r);
}