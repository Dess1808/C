/*
logica principal:
contador de numero positvo
fazer com array de floats
*/

#include<stdio.h>

#define SIZE 6

int main(void)
{   
    //control array interger
    float numbers[SIZE];
    int count = 0;

    //input, isso pode melhorar 
    scanf("%f", &numbers[0]);
    scanf("%f", &numbers[1]);
    scanf("%f", &numbers[2]);
    scanf("%f", &numbers[3]);
    scanf("%f", &numbers[4]);
    scanf("%f", &numbers[5]);

    //count
    for (int i = 0; i < SIZE; i++)
    {
        if(numbers[i] > 0)
            count++;
    }

    //output
    printf("%i valores positivos\n", count);
    
    return 0;
}