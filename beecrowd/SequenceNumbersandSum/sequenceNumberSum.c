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
    

    while(controlLoop)
    {
        //input
        scanf("%d %d", &m, &n);

        //check flux main
        if ((m > 0) || (n > 0))
        {
            //check difference count
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

            //restart variable control of sum
            int sumNumber = 0;

            //output sequence number
            for (int i = 0; i < difference; i++)
            {
                printf("%d ", numberControl);

                sumNumber += numberControl;
                numberControl++;    
            }

            //output sum
            printf("Sum = %d\n", sumNumber);
       }
       else 
       {    
            controlLoop = 0;
       }
    }

    return 0;
}