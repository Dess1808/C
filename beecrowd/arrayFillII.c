#include<stdio.h>

#define SIZE 1000

int main()
{
    //controle variable
    int t = 0;
    int count = 0;
    int n[SIZE];

    //input t
    scanf("%d", &t);

    //logic + atribuition
    while(1)
    {
        //condition externa
        if (count != SIZE - 1 )
        {
            for (int j = 0; j < t; j++)
            {
                n[count] = j; //atribuition

                //condition interna
                if (count == SIZE - 1)
                    break; //break interno
                else
                    count++;
            }
        }
        else
        {
            //break externo
            break;
        }
    }//end while

    //output
    for (int i = 0; i < SIZE; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}
