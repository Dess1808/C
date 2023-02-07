/*
    if((number % 2) != 0)
    {
        printf("%d\n");
        countTime++
        number++
    }

    loop enquanto o countTime for <= 6
*/

#include<stdio.h>

int main(void)
{
    //control variable
    int x = 0;
    int countTime = 1;
    int numberControl = 0;

    //input 
    scanf("%d", &x);

    //copy
    numberControl = x;

    //main loop
    while(countTime <= 6)
    {
        //main logic
        if ((numberControl % 2) != 0)
        {
            //output
            printf("%d\n", numberControl);
            countTime++;
            numberControl++;
        }

        numberControl++;
    }

    return 0;
}