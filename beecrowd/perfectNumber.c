/*
    numero perfeito:
    a soma dos seus divisores anteriores for igual ao proprio N
*/

#include<stdio.h>

int main(void)
{
    //control variable
    int n, x, perfectNumber = 0;
    int aux = 1;

    //input
    scanf("%d", &n);
 
    for (int i = 0 ; i < n; i++)
    {
        //input number for test
        scanf("%d", &x);

        //reset variable
        aux = 1;
        perfectNumber = 0;

        while(aux < x)
        {   
            if ((x%aux) == 0)
            {
                perfectNumber += aux;
                aux++;
            }
            else 
                aux++;
        }

        //output only cases
        if (perfectNumber == x)
            printf("%d eh perfeito\n", x);
        else 
            printf("%d nao eh perfeito\n", x);
    }

    return 0;
}