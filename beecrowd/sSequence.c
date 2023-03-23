#include<stdio.h>

int main(void)
{
    double s = 1.00;
    int count = 2;
    int m = 98;

    //sum by divider 
    while(m)
    {
        s += (double) 1/count;
        count++;
        m--;
    }

    //output 
    printf("%.2lf\n", s + 0.01);
}