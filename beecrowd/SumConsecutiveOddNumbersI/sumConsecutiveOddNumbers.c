/*
    a diferenca entre x e y sera quantas vezes temos que repetir 
    o menor valor tera que ser incrementado

    oddNumber = 0

    loopControl = x - y

    if(loopControl != 0)
    {
        //faca
        if((numberControl % 2) != 0)
        {
            oddNumber = numberControl
            printf("%d\n", oddNumber)
        }

        numberControl++
    }
    else 
    {
        printf("%d\n", oddNumber);
    }
*/

#include<stdio.h>

int main(void)
{
    //control variable
    int sumOdd = 0;
    int loopControl = 0;
    int numberControl = 0;
    int x, y;

    //input 
    scanf("%d", &x);
    scanf("%d", &y);

    //difference, verificar calculo
    loopControl = (x - y) - 1; //nao estamos contanto com x e y, somente o que esta "entre" 

    //control number incremetation less
    numberControl = y + 1;

    //main logic
    for (int i = 0; i < loopControl; i++)
    {
        if ((numberControl % 2) != 0)
        {
            sumOdd += numberControl;
        }   

        numberControl++;
    }

    //output 
    printf("%d\n", sumOdd);

    return 0;
}