/*
    hipotose 1:
    tirar as diferencas e montar um tabelas de resultados ja com a porcentagem

    link base
    https://plantaocontabil.com.br/blog/parcelas-a-deduzir-do-imposto-de-renda/

    0.00 - 2000.00 - inseto
    2000.01 - 3000.00 (8%) 1000.00 - EIGHTP 
    3000.01 - 4500.00 (18%) 1500.00 - 0.18
    acima de 4500.00 (28%) 4500.00 - 0.28

    status: NAO FUNCIONOU
    
    Hipotese 2:
    link base
    https://ingracio.adv.br/contribuicoes-inss/

    status: NAO FUNCINOU

    HIPOTESE 3:
    tive que pesquisar um solucao, pos o problema este descrito de forma muito incoerente
    base: https://www.codeshikhi.com/2021/01/uri-1051-taxes-solution-in-c-cpp-cpluscplus-python.html

    a solucao nao esta correta, continuar procurando...

    STATUS: NAO FUNCIONOU

    HIPOTESE 4:

    logica descrita:
    utilizar valores de porcentagem fixa, e somar esses valores tirando a diferenca com o salario inserio, 
    depois tirar a porcentagem da diferenca de acordo com a trate do salario.
*/

#include<stdio.h>
#include<cs50.h>

#define EIGHTP 0.08
#define EIGHTEENP 0.18
#define TWENTYEIGHTP 0.28

void Show(double r);

int main(void)
{
    double salary = get_double("salary: ");
    double resultado;

    //controle variaveis 
    int EightRateDiference = 1000 * EIGHTP;
    int EightTeenRateDiference = 1500 * EIGHTEENP;

    //logica
    if (salary <= 2000.00)
    {
        //inseto
        printf("Isento\n");
    }
    else if ((salary >= 2000.01) && (salary <= 3000.00))
    {
        //aplicar %8 do salario
        resultado = (salary - 2000) * EIGHTP;
        Show(resultado);
    }
    else if ((salary >= 3000.01) && (salary <= 4500.00))
    {
        //aplicar %18 a resto do salario
        resultado = EightRateDiference + ((salary - 3000) * EIGHTEENP);
        Show(resultado);
    }
    else if (salary > 4500)
    {
        //aplica %28 ao resto do salario
        resultado = (EightRateDiference + EightTeenRateDiference) + ((salary - 4500) * TWENTYEIGHTP);
        Show(resultado);
    }

    return 0;
}

void Show(double r)
{
    printf("R$ %.2lf\n", r);
}