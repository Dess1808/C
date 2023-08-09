#include<stdio.h>

int Abs(int x);

int main(void)
{
    int q, r, a, b = 0;

    //input
    scanf("%d%d", &a, &b);

    if ((a % b) >= 0)
    {
        printf("%d %d\n", a/b, a%b);
    }
    else 
    {
        //q
        if ((a / b) >= 0)
            q = (a / b) + 1;//positivo
        else    
            q = (a / b) - 1;//nagativo

        r = Abs(a % b); 
        printf("%d %d\n", q, r);
    }

    return 0;
}

int Abs(int x)
{
    if (x < 0)
    {
        return x *= -1;
    }
    else
    {
        return x;
    }
}