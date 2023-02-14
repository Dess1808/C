#include<stdio.h>


int main(void)
{
    int i = 1;
    int j = 7;
    int copyJ = 0;

    for (int a = 0; a < 5; a++)
    {
        copyJ = j;

        for (int b = 0; b < 3; b++)
        {
            printf("I=%d J=%d\n",i,copyJ);

            copyJ -= 1;
        }

        i += 2;
        j += 2;
    }

    return 0;
}