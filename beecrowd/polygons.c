#include<stdio.h>

int main(void)
{
    //control variables
    unsigned long int side = 0;
    unsigned long int length = 0;

    //input
    scanf("%lu%lu", &side, &length);

    printf("%lu\n", side * length); 
    

    return 0;
}