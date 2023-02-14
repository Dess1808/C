#include<stdio.h>

int main(void)
{
    int i = 1;
    int j = 60;

    for (int x = 0; x <= 12; x++)
    {
        printf("I=%d J=%d\n",i, j);

        i += 3;
        j -= 5;
    }   

    return 0;
}