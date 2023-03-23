#include<stdio.h>

int main(void)
{
    //control variable  
    float numerator = 1, denominator = 1;
    float s = 0;

    //loop repetition
    while(numerator <= 39)
    {
        s += (float) numerator / denominator;
        numerator += 2;
        denominator *= 2; 
    }

    //output
    printf("%.2f\n", s);
}