#include<stdio.h>

void linha(int x);

int main(void)
{
    linha(3);
    linha(5);
    linha(7);
    linha(5);
    linha(3);
}

void linha(int x)
{
    for(int i = 0; i < x; i++)
    {
        putchar('*');
    }
    putchar('\n');
}