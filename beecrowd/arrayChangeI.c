/*
    utilizar 2 auxiliares para fazer as trocas
*/

#include<stdio.h>

#define SIZE 20

int main(void)
{
    //control variable
    int n[SIZE];
    int aux1, aux2 = 0;

    for (int i = 0; i < SIZE; i++)
    {
        //input
        scanf("%d", &n[i]);
    }

    //swaping
    for (int i = 0, j = SIZE - 1; i < j; i++, j--)
    {
        aux1 = n[i]; //first position
        aux2 = n[j]; //last position

        //first position
        n[i] = aux2;

        //last position
        n[j] = aux1;
    }

    //output
    for (int i = 0; i < SIZE; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}
