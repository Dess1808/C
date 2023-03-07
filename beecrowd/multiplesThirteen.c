#include<stdio.h>

void Show(int cm);
int Abs(int a);

int main()
{
    //variable control
    int x = 0;
    int y = 0;
    int less = 0;
    int countMultiples = 0;

    //input
    scanf("%d", &x);
    scanf("%d", &y);

    //getting less
    if (x > y)
        less = y;
    else if (x < y)
        less = x; 

    //getting difference
    int sizeBeteween = Abs(x - y);

    //all soum multiples 13
    for (int i = 0; i <= sizeBeteween; i++)
    {
        if (less % 13 != 0) //main formule
            countMultiples += less;
        
        less++;
    }

    //output total
    Show(countMultiples);

    return 0;
}

void Show(int cm)
{
    printf("%d\n", cm);
}

int Abs(int a)
{
    if (a < 0)
        return a *= -1;
    else 
        return a;
}
