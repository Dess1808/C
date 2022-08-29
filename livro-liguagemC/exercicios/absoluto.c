#include<stdio.h>
#include<cs50.h>

int Absoluto(int x);

int main(void)
{
    int x = get_int("x: ");

    printf("%i\n", Absoluto(x));
}

int Absoluto(int x)
{
    if(x < 0)
    {
        return x * (-1);    
    }   
    else
    {
        return x;
    }
}