#include<stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);

    int x = a - b;

    if(x < 0)
        x *= -1;
        
    printf("%d\n", x);
}