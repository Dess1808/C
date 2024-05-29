#include<stdio.h>

int main(void)
{
    //fix the long numbers

    //variable control
    long double number = 0.0;
    int count = 0;

    //input
    scanf("%Lf", &number);

    //condition main
    if (number < 0) //negativos
    {
        //identification
        if (number > -1) //maior que -1 "multiplicar"
        {
            while(number > -1)
            {
                number *= 10;
                count++;
            }

            //output
            printf("%.4LfE-%02d\n", number, count);
        }
        else if (number < -10) //menor que -10 "dividir"
        {
           while(number < -10)
            {
                number /= 10;
                count++;
            }

            //output
            printf("%.4LfE+%02d\n", number, count);
        }
        else //numero no range, output sem calculo, so formatacao
        {
            printf("%.4LfE+00\n", number);
        }
    }
    else if (number == 0)//Fix 0
    {
        //necessary for oparation
        char number_str[10];

        //converte number '0'
        sprintf(number_str, "%Lf", number);

        //comparer array at number with char '-'
        if (number_str[0] == '-')
        {
            printf("%.4LfE+00\n", number);
        }
        else
        {
            printf("+%.4LfE+00\n", number);
        }
        
    }
    else //positivos
    {
        if (number < 1) //menor que 1 "multiplicar"
        {
            while(number < 1)
            {
                number *= 10;
                count++;
            }

            //output
            printf("+%.4LfE-%02d\n", number, count);
        }
        else if (number > 10)//maior que 10 "dividir"
        {
            while(number > 10)
            {
                number /= 10;
                count++;
            }

            //output
            printf("+%.4LfE+%02d\n", number, count);
        }
        else //numero no range, output sem calculo, so formatacao
        {
           printf("+%.4LfE+00\n", number);
        }
    }

    return 0;
}

/**
 * modos de operação
 *
 *  para números negativos (menores que -10, multiplicar por 10 || maiores que -1, dividir por 10)
 *          /
 *  ===============>
 * -10 ------------ -1 0
 *  <===============
 *          X
 *
 *  para números positivos (maiores 000,000000000,que 10, dividor por 10 || menores que 1, multiplicar por 10)
 *          X
 *   ================>
 * 0 1 ------------- 10
 *   <===============
 *          /
 *
 * passos
 * [] definir se o positivo ou negativo
 * [] rodar um loop dividindo o numero ou multiplicando ate o mesmo ficar entre 1 e 10
 *    como faria para testar a parte inteira
*/


/**
 * A LOGICA ESTA CERTO, POREM ESTA ACONTECENDO IMPRECISAO COM NUMEROS LONGS!!!
*/