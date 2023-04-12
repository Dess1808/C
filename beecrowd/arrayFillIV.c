/*
    para cada array par ou impar, ha possibilidade

    hipoteses:
    colocar toda a entra em um array de 15 posicoes para depois trabalhar a "divisao" desses dados
    
    preciso de um controle para limpar os array par e impar todas vez que os mesmos estiverem com as 5 posicoes 
    preenchidas

    para deixar um array vazio posso preenchelo com valores nulos '\0'

    posso enviar por funcoes array com tamanhos definos?
*/

#include<stdio.h>
#include<ctype.h>

#define SIZEINPUT 15
#define SIZE 5

void ArrayVazio(int a[SIZE]);
void Show(int b[SIZE], char ch);

int main(void)
{
    //control variable
    int inputArray[SIZEINPUT];
    int even[SIZE];
    int odd[SIZE];
    int countEven = 0;
    int countOdd = 0;
    int i = 0;

    //reset array
    ArrayVazio(even);
    ArrayVazio(odd);

    //input
    for (int i = 0; i < SIZEINPUT; i++)
    {
        scanf("%d", &inputArray[i]);
    }

    //logic
    while(1)
    {
        if (i != SIZEINPUT)
        {
            //even
            if ((inputArray[i] % 2) == 0)
            {
                //control
                if (countEven < SIZE)
                {
                    //atribuition even
                    even[countEven] = inputArray[i];
                    
                    //nex position array specific
                    countEven++; 

                    //next position array amin
                    i++; 
                }
                else
                {
                    //output
                    Show(even, 'e');

                    //reset array
                    ArrayVazio(even);

                    //reset count
                    countEven = 0;
                }
            }
            else //odd
            {
                //control
                if (countOdd < SIZE)
                {
                    //atribuition odd
                    odd[countOdd] = inputArray[i];
                    
                    //next position array specific
                    countOdd++;

                    //next position array amin
                    i++;
                }
                else
                {
                    //output
                    Show(odd, 'o');

                    //reset array
                    ArrayVazio(odd);

                    //reset count
                    countOdd = 0;
                }
            }//end if number even and odd
        }
        else 
        {
            break;
        }
    }//end while

    //output o que sobrou
    Show(odd, 'o');
    Show(even, 'e'); 

    return 0;
}

void ArrayVazio(int a[SIZE])
{
    //zerando com caracteres nulos
    for (int i = 0; i < SIZE; i++)
    {
        a[i] = '\0'; //null
    }
}

void Show(int a[SIZE], char ch)
{
    //definindo o que vai ser impresso
    if (ch == 'e') //even
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (a[i])
                printf("par[%d] = %d\n", i, a[i]);
        }
    }
    else if (ch == 'o') //odd
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (a[i])
                printf("impar[%d] = %d\n", i, a[i]);
        }
    }
}