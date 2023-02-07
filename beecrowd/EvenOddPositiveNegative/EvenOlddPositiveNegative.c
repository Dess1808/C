/*
    par - number % 2 == 0
    impar - number % 2 != 0
    positivo - number > 0
    negativo - number < 0
*/

#include<stdio.h>

#define SIZE 5

int main(void)
{
    //control variables
    int numbers[5];\
    int countPositive = 0; 
    int countEven = 0 ;
    int countOdd = 0;
    int countNegative = 0;

    //input
    scanf("%d", &numbers[0]);
    scanf("%d", &numbers[1]);
    scanf("%d", &numbers[2]);
    scanf("%d", &numbers[3]);
    scanf("%d", &numbers[4]);

    //process all
    for (int i  = 0; i < SIZE; i++)
    {
        //odd
        if ((numbers[i] % 2) != 0)
            countOdd += 1;
        
        //even
        if ((numbers[i] % 2) == 0)
            countEven += 1;
        
        //positive
        if(numbers[i] > 0)
            countPositive += 1;
        
        //negative
        if(numbers[i] < 0)
            countNegative += 1;
    }

    //output
    printf("%d valor(es) par(es)\n", countEven);
    printf("%d valor(es) impar(es)\n", countOdd);
    printf("%d valor(es) positivo(s)\n", countPositive);
    printf("%d valor(es) negativo(s)\n", countNegative);

    return 0;
}