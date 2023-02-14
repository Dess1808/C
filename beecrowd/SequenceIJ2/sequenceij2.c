#include<stdio.h>


int main(void)
{
    int i = 1;
    int j = 0;

    for (int a = 0; a < 5; a++)
    {
        j = 7;

        for (int b = 0; b < 3; b++)
        {
            printf("I=%d J=%d\n",i,j);

            j -= 1;
        }

        i += 2;
    }

    return 0;
}