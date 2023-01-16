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
        printf("Novo Salario: %.2lf\n", newSalary);
        printf("Reajuste ganho: %.2lf\n", moneyEarned);
        printf("Em percentual: %d %%\n", FIFTEEN);
    }
    else if ((salary >= 400.01) && (salary <= 800.00))
    {
        //12%
    } çll
    else if ((salary >= 800.01) && (salary <= 1200.00))
    {
        //10%
    }
    else if ((salary >= 1200.01) && (salary <= 2000.00))
    {
        //7%
    }
    else 
    {
        //%4
    }

    return 0;
    
}