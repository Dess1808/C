/*
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
*/



#include<stdio.h>
#include<math.h>

int Abs(int x);

int main(void)
{
    int dividend, divider, quocient, rest, restAbs, dividendAux, hcf = 0;

    //input variabel
    scanf("%d%d", &dividend, &divider);

    //rest absoluti calc
    //restAbs = rest + Abs(divider);

    //quocient calc
    dividendAux = dividend;

    //verificar bug
    while(1)
    {
        //control variable
        quocient = dividend/divider;
        rest = dividend%divider;

        //euclide division
        hcf = divider * quocient + rest;

        //test for equal
        if ((rest >= 0) && (rest < Abs(divider)))
        {
            if(hcf == dividendAux)
            {
                printf("%d\n", quocient);
                break;
            }
        }
            
        //new values
        dividend = divider;
        divider = rest;
    }
    
    return 0;
}

int Abs(int x)
{
    if (x < 0)
        return x *= -1;
    else
        return x;
}