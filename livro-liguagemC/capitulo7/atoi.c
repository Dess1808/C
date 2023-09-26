/**
 * problema:
 * Recebe uma string e devolve o inteiro que nela esta representado
 *
 * hipotese: tenho que separar em uma outra string os digitos para depois converte-los utilizando a funcao
 * atoi(), porem apenas a primeira ocorrencia de um inteiro, e se caso for encontrado sinal de subtração, deixar o numero
 * negativo
 *
 * obs: retorna o primeiro inteiro encontrado
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(void)
{
    char s[] = "-123abc123";
    int i, n, numberIndex = 0;

    char number[strlen(s)];

    for (i = 0, n = strlen(s); i < n; i++)
    {
        if (isdigit(s[i])) //primeiro digito encontrado
        {
            //so deve para quando encontrar um caracter alfabetico
            while(isdigit(s[i]) || i < n)
            {
                //atribuir na string de digitos
                number[numberIndex] = s[i];

                //next value
                i++;
                numberIndex++;
            }
        }
        else
        {
            continue;
        }

        //end string
        number[numberIndex] = '\0';
        break;
    }


    //output
    printf("%d\n", atoi(number));

    return 0;
}

