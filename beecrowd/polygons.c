#include<stdio.h>

int main(void)
{
    //control variables
    int length, side = 0;

    //input
    scanf("%d%d", &side, &length);
    
    //output
    printf("%d\n", side * length);

    return 0;
}