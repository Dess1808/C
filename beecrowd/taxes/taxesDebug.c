/*
    hipotose 1:
    tirar as diferencas e montar um tabelas de resultados ja com a porcentagem

    link base
    https://plantaocontabil.com.br/blog/parcelas-a-deduzir-do-imposto-de-renda/

    0.00 - 2000.00 - inseto
    2000.01 - 3000.00 (8%) 1000.00 - 0.08 
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

    utilizar valores de porcentagem fixa, e somar esses valores tirando a diferenca com o salario inserio
*/

#include<stdio.h>

int main(void)
{
    double salary = get_double("salary: ");

    //definido as faixas
    if()
}