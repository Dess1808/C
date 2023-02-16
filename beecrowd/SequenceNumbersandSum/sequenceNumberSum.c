/*
    repetir enquando uma das entradas dor < || == 0
*/

#include<stdio.h>

int main(void)
{
    //control variable
    int controlLoop = 1;
    int m = 0;
    int n = 0;
    int difference = 0;
    int numberControl = 0;
    int countSize = 0;


    //verificar loop
    while(controlLoop)
    {
        //input
        scanf("%d %d", &m, &n);

        //check flux main
        if ((m > 0) && (n > 0))
        {
            countSize++;

            //alocacao dinamica??
        }
        else
        {
            controlLoop = 0;
        }
    }

    



    return 0;
}