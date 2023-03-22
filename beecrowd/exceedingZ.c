/*
    [x] - ler Z enquanto for <= a X
    [x] - somar sequecia a partir de x, somando +1, enquanto sum x for menor ou igual a z
    [x] - printar count
*/

#include<stdio.h>

int main(void)
{
    //control variable 
    int x = 0;
    int z = 0;
    int sum = 0;
    int count = 0;

    //x
    scanf("%d", &x);

    do
    {
        //z
        scanf("%d", &z);
    } while (z <= x);

    //cal
    while(1)
    {
        sum += x++; //sequencia a partir de x, 
        count++;

        if (sum >= z)
            break;
    }

    //output
    printf("%d\n", count);

    return 0;
}