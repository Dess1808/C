/*
    if((number[i] % 2) == 0)
        countEven++
*/

#include<stdio.h>

#define SIZE 5

int main(void)
{
    //control vector
    int numbers[SIZE];
    int countEven = 0;

    //input
    scanf("%d", &numbers[0]);
    scanf("%d", &numbers[1]);
    scanf("%d", &numbers[2]);
    scanf("%d", &numbers[3]);
    scanf("%d", &numbers[4]);

    //logic
    for(int i = 0; i < SIZE; i++)
    {
        if((numbers[i] % 2) == 0)
            countEven += 1;
    }
       
    //output
    printf("%d valores pares\n", countEven);

    return 0;
}