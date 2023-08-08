#include<stdio.h>
#include<math.h>

int Abs(int x);
void Show(int q, int r);

int main(void)
{
    //control varible
    int dividendo, divisor, resto, quoeficiente = 0;

    //input
    scanf("%d%d", &dividendo, &divisor);

    //ok
    if ((dividendo < 0) && (divisor > 0)) //-a, b -> o quoeficente tera que ser arredondado pra cima e o resto absoluto subtraido pelo b absoluto
    {
        quoeficiente = ceil((dividendo / divisor) - 1);

        resto = divisor - Abs(dividendo % divisor);

        //output
        Show(quoeficiente, resto);
    }
    //ok
    else if ((dividendo > 0) && (divisor < 0)) //a, -b -> apenas subtrair o b absoluto pelo resto absoluto, ou apenas tirar o modulo padrao de dividendo e divisor
    {
        quoeficiente = dividendo / divisor;

        resto = dividendo % divisor;

        //output
        Show(quoeficiente, resto);
    }
    //ok
    else if ((dividendo < 0) && (divisor < 0)) //-a, -b -> apenas o quoeficiente sera arredondado para cima
    {
        //preciso arredondar para cima quando o dividendo for maior negativamente
        //a logica para os negativos e sendo o dividendo menor negativamente e divisor maior
        if (dividendo < divisor)
            quoeficiente = ceil((dividendo / divisor) + 1);
        else
            quoeficiente  = dividendo / divisor;

        //condition se 0
        if ((Abs(dividendo % divisor)) != 0)
            resto = Abs(divisor) - Abs(dividendo % divisor);
        else
            resto = 0;

        //output
        Show(quoeficiente, resto);

    }
    else //a, b -> divisao normal (quoeficiente)
    {
        quoeficiente = dividendo / divisor;
        resto = dividendo % divisor;

        Show(quoeficiente, resto);
    }

    return 0;
}

int Abs(int x)
{
    if (x < 0)
    {
        return x *= -1;
    }
    else
    {
        return x;
    }
}

void Show(int q, int r)
{
    printf("%d %d\n", q, r);
}




/*

    hipotese 1
    obter o resto e quociente de uma divisao

    quociente - parte inteira da divisao
    resto - modulo

    duas funcoes
    EuclidesDivision() - retornar um valor inteiro atraves da formula (divisor * quoci + rest)
    Abs() - retorna o valor absoluto de um valor

    logica
    para o quociente:
    com base no dividendo, o laco so encerra de o retorno de EuclidesDivision for igual ao dividendo em questao,
    o valor do retorno nesse caso especifico sera nossa saida

    para o resto:
    calculo o resto com o valor absoluto de divisor, esse sera o resultado apresentado

    https://www.cuemath.com/numbers/euclids-division-algorithm/

    entao teria duas condições

    a = b * q + r && 0<= r < b


    hipotese 2:

    https://www.youtube.com/watch?v=9onmRUpb2xs

    possibilidades:

    a, b -> divisao normal (quoeficiente)

    -a, b -> o quoeficente tera que ser arredondado pra cima e o resto absoluto subtraido pelo b absoluto

    a, -b -> apenas subtrair o b absoluto pelo resto absoluto

    -a, -b -> apenas o quoeficiente sera arredondado para cima
*/