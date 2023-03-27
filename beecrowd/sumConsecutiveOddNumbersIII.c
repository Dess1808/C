/*
    condicoes:
    se y for par, somar para pegar o proximo impar
    para y testes, utilizar somente impares
    para y teste soma-los
*/

#include<stdio.h>

int SumOddNumbers(int x, int y);

int main(void)
{
    //control variable
    int n = 0;
    int countOdd = 1;
    int sumOddX = 0;
    int x, y = 0;
    int control  = 0;

    //input
    scanf("%d", &n);    

    for (int i = 0; i < n; i++)
    {
        //x, y
        scanf("%d %d", &x, &y);

        //condicao para inicio, par ou impar
        if ((x % 2) != 0)
        {
            //impar
            printf("%d\n", SumOddNumbers(x, y));
        }
        else 
        {
            //par

            //atualizando para o proximo numero impar
            x++;
            printf("%d\n", SumOddNumbers(x, y));
        }//end if
    }//end for
}//end main

int SumOddNumbers(int x, int y)
{
    //control variable

    //reset variable
    int countOdd = x;
    int sumOddX = 0;
    int control = 0;

    while(1)
    {
        //validation numbers
        if ((countOdd % 2) != 0)
        {
            //sum all odds
            sumOddX += countOdd;
            
            //update counters
            countOdd++;
            control++;
        }
        else
        {
            countOdd++;
            continue;
        } 
            
        //base case
        if (control == y)
        {
            return sumOddX;
        }
    }
}