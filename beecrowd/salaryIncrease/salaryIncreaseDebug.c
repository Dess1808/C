/*
    estabelcer em qual faixa de numeros esta a entrada
    calcular porcentagem vezes o valor do input
    dividir o resultado por 100
    somar valor do input mais resultado divido por 100 (novo valor reajustado)
    mostra novo valor
    mostra a quantidade da adicao

    formular:
    r = (porcentagem * input) / 100
    rFinal = input + r

    tabela:
    0 - 400.00 = 15%
    400.01 - 800.00 = 12%
    800.01 - 1200.00 = 10%
    1200.01 - 2000.00 = 7%
    Above 2000.0 = 4%
*/

#include<stdio.h>
#include<cs50.h>

#define FIFTEEN 15
#define TWELVE 12
#define TEN 10
#define SEVEN 7
#define FOUR 4

void show(double newSalary, double moneyEarned, int percentage);

int main(void)
{
    //input + variable inicialization
    double salary = get_double("salary: ");

    double newSalary, moneyEarned;

    //selecao
    if ((salary >= 0) && (salary <= 400.00)) 
    {
        //15%
        moneyEarned = (FIFTEEN * salary) / 100;
        newSalary = salary + moneyEarned;

        //ouput 
        show(newSalary, moneyEarned, FIFTEEN);
    }
    else if ((salary >= 400.01) && (salary <= 800.00))
    {
        //12%
        moneyEarned = (TWELVE * salary) / 100;
        newSalary = salary + moneyEarned;

        //ouput 
        show(newSalary, moneyEarned, TWELVE);
    } 
    else if ((salary >= 800.01) && (salary <= 1200.00))
    {
        //10%
        moneyEarned = (TEN * salary) / 100;
        newSalary = salary + moneyEarned;

        //ouput 
        show(newSalary, moneyEarned, TEN);
    }
    else if ((salary >= 1200.01) && (salary <= 2000.00))
    {
        //7%
        moneyEarned = (SEVEN * salary) / 100;
        newSalary = salary + moneyEarned;

        //ouput 
        show(newSalary, moneyEarned, SEVEN);
    }
    else 
    {
        //%4
        moneyEarned = (FOUR * salary) / 100;
        newSalary = salary + moneyEarned;

        //ouput 
        show(newSalary, moneyEarned, FOUR);
    }

    return 0;   
}


void show(double newSalary, double moneyEarned, int percentage)
{
    printf("Novo Salario: %.2lf\n", newSalary);
    printf("Reajuste ganho: %.2lf\n", moneyEarned);
    printf("Em percentual: %d %%\n", percentage);
}
