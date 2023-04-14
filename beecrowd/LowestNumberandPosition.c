/*
    em um array, mostrar o menor valor em relacao ao demais
*/

#include<stdio.h>

int main(void)
{
    //controle variable
    int n = 0; 
    int less = 0;
    int position = 0;

    //input 
    scanf("%d", &n);

    //array size n
    int x[n];

    //input number n times
    for (int i = 0 ; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    //first value
    less = x[0];

    //less number
    for (int i = 0; i < n; i++)
    {
        //sempre armazenando o menor
        if (less >= x[i])
        {
            less = x[i];
            position = i;
        }
    }

    //output 
    printf("Menor valor: %d\nPosicao: %d\n", less, position);


    return 0;
}