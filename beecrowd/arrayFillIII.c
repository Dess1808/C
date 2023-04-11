#include<stdio.h>

#define SIZE 100

int main(void)
{
    //controle variable 
    double x, result;   
    double n[SIZE];
    int count = 0;

    //input 
    scanf("%lf", &x);

    //start atribuition
    result = x;

    //repetition
    do
    {
        //first valeu default
        n[count] = result;

        //accumulator
        result /= 2;
        
        //incrense
        count ++;

    } while (count < SIZE);
    

    //output
    for (int i = 0; i < SIZE; i++)
    {
        printf("N[%d] = %.4lf\n", i, n[i]);
    }

    return 0;
}