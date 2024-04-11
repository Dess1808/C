/*
    sempre retornar o maior valor de dois inseridos
*/

#include<stdio.h>

int main(void)
{
    int a, b = 0;

    //input
    scanf("%d%d", &a, &b);

    if (a >= b)
        printf("%d\n", a);
    else 
        printf("%d\n", b);
    
    return 0;
}