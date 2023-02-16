#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

int main(void)
{
    int target = 9;
    int arrayElements[] = {11, 23, 8, 14, 30, 9, 6, 17, 22, 28, 25, 15, 1, 10, 19};

    for (int i = 0; i < sizeof(arrayElements); i++)
    {
        if (arrayElements[i] == 9)
        {
            printf("found!\n");
            break;
        }
        else 
            printf("cheking...\n");
    }

    return 0;
}