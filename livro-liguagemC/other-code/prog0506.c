#include<stdio.h>
#include<cs50.h>

void linha(char c, int x);

int main(void)
{
    linha('%', 6);
    linha('&', 10);
    linha('*', 14);
    linha('$', 10);
    linha('@', 6);
}

void linha(char c, int x)
{
    for(int i = 0; i < x; i++)
    {
        putchar(c);
    }
    putchar('\n');
}
