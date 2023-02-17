/*
    repetir enquando uma das entradas dor < || == 0
*/

#include<stdio.h>

int main(void)
{
    //control variable
    int m = 0;
    int n = 0;
    int difference = 0;
    int numberControl = 0;
    int countSize = 0;
    int sumAll = 0;


    //verificar loop
    while(1)
    {
        //input
        scanf("%d %d", &m, &n);

        //check flux main
        if ((m > 0) && (n > 0))
        {   
            //restart variable control
            difference = 0;
            numberControl = 0;
            sumAll = 0;
            
            //difference plus smaller number
            if ((m - n) < 0)
            {
                difference = (n - m) + 1;
                numberControl = m;
            }
            else 
            {
                difference = (m - n) + 1;
                numberControl = n;
            }

            //output sequence insert
            for (int i = 0; i < difference; i++)
            {
                printf("%d ", numberControl);
                sumAll += numberControl;
                numberControl++;
            }

            //output sum
            printf("Sum=%d\n", sumAll);
        }
        else
        {
            break;
        }
    }

    return 0;
}