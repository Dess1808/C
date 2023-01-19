#include<stdio.h>

#define FIFTEEN 15
#define TWELVE 12
#define TEN 10
#define SEVEN 7
#define FOUR 4

void Show(float salary, float moneyEarned, int porcentage);

int main(void)
{
    //control
    float salary;

    //input
    scanf("%f", &salary);

    //control two
    float moneyEarned, newSalary;

    //calc
    if ((salary >= 0) && (salary <= 400.00)) 
    {
        //15%
        moneyEarned = (FIFTEEN * salary) / 100;
        newSalary = salary + moneyEarned;

        //ouput 
        Show(newSalary, moneyEarned, FIFTEEN);
    }
    else if ((salary >= 400.01) && (salary <= 800.00))
    {
        //12%
        moneyEarned = (TWELVE * salary) / 100;
        newSalary = salary + moneyEarned;

        //ouput 1
        Show(newSalary, moneyEarned, TWELVE);
    } 
    else if ((salary >= 800.01) && (salary <= 1200.00))
    {
        //10%
        moneyEarned = (TEN * salary) / 100;
        newSalary = salary + moneyEarned;

        //ouput 
        Show(newSalary, moneyEarned, TEN);
    }
    else if ((salary >= 1200.01) && (salary <= 2000.00))
    {
        //7%
        moneyEarned = (SEVEN * salary) / 100;
        newSalary = salary + moneyEarned;

        //ouput 
        Show(newSalary, moneyEarned, SEVEN);
    }
    else if (salary > 2000.00) 
    {
        //%4
        moneyEarned = (FOUR * salary) / 100;
        newSalary = salary + moneyEarned;

        //ouput 
        Show(newSalary, moneyEarned, FOUR);
    }

    return 0;  
}

//print ouput
void Show(float newSalary, float moneyEarned, int percentage)
{
    printf("Novo salario: %.2lf\n", newSalary);
    printf("Reajuste ganho: %.2lf\n", moneyEarned);
    printf("Em percentual: %d %%\n", percentage);
}
