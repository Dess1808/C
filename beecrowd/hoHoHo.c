#include<stdio.h>

int main(void)
{
    //control variable
    int n = 0;

    //input 
    scanf("%d", &n);

    //loop + awnser
    for (int i = 0, size = n; i < size; i++)
    {
        if (i == size - 1)
            printf("Ho!\n");
        else 
            printf("Ho ");
    }

    return 0;
}