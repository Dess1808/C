/*
    input persinalizado < 1000
    para cada caso inserido  X (-107 < X < 107).
*/
#include<math.h>
#include<stdio.h>

int main(void)
{
    //controle variable
    int n = 0;
    int size = 0;
    int countIn = 0;
    int countOut = 0;

    //input
    scanf("%d", &n);

    //main flux
    if ((n > 0) && (n < 1000))
    {
        //array of x
        size = n; int numbers[n];

        //input 2 - loop
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &numbers[i]);
        }

        //ranges
        double a = pow(-10,7);
        double b = pow(10,7);

        //test of range 10 - 20
        for (int j = 0; j < size; j++)
        {
            //control input
            if ((numbers[j] > a) && (numbers[j] < b))
            {
                //10 - 20
                if ((numbers[j] >= 10) && (numbers[j] <= 20))
                    countIn += 1;
                else
                    countOut += 1;
            }
        }

        //output
        printf("%d in\n", countIn);
        printf("%d out\n", countOut);
    }

    return 0;
}