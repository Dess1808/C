/**
 * HIPOTE 1: formule wilson`s prime number
 *      (n - 1)! mod n;
 * codigo:
 *      factorial(n - 1) % n; 
 * 
 * HIPOTE 2: fazer a contagem do divisores de n, se maior que 3 nao e um numero primo
*/

#include<stdio.h>

int main(void)
{
    //control variable
    int n, x, aux, countDivisors= 0;

    //input lines
    scanf("%d", &n);

    //interation with output
    for (int i = 0; i < n; i++)
    {
        //input number possible prime
        scanf("%d", &x);

        //reset variable
        aux = 1;
        countDivisors = 0;

        //fazendo a contagem de quando divisores x tem - mais de 3, nao e um numero primo
        while(aux <= x) //conto tambem a divisao do proprio numero
        {
            if ((x%aux) == 0)
            {
                countDivisors++;
                aux++;
            }
            else 
                aux++;
        }

        //condition for output for only case
        if (countDivisors <= 2)
            printf("%d eh primo\n", x);
        else 
            printf("%d nao eh primo\n", x);
    }

    return 0;
}