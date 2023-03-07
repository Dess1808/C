/*
    resto de divisao por 5 == 2 or 3

    estabelecer range ENTRE numeros inseridos
*/

#include<stdio.h>

void Show(int i);

int main(void)
{
    int x = 0;
    int y = 0;
    int sizeBetween = 0;
    int less = 0;

    //x
    do
    {
        scanf("%d", &x);

        if (x >= 0)
            break;
    } while (1);


    //y
    do
    {
        scanf("%d", &y);

        if (y >= 0)
            break;
    } while (1);

    //calc between
    if (x > y)
    {
        less = y;
        sizeBetween = (x - y) - 1;
    }
    else if (x < y)
    {
        less = x;
        sizeBetween = (y - x) - 1;
    }
    else
    {
        sizeBetween = x - y;
    }

    //count + calc of rest
    for (int i = 0; i < sizeBetween; i++)
    {
        less++;

        if ((less % 5 == 2) || (less % 5 == 3)) //verificar se esta certo
        {
            Show(less);
        }
        else
            continue; //pula para o proximo
    }

    return 0;
}

void Show(int less)
{
    printf("%d\n", less);
}