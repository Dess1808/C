#include<stdio.h>

int main(void)
{
    int n = 0;
    int x = 0;
    int y = 0;

    //input count loop
    scanf("%d", &n);

    //loop main
    for (int i = 0; i < n; i++)
    {
        //input x and y
        scanf("%d %d", &x, &y);

        //logic main with output
        if (y != 0)
            printf("%.1lf\n", (double) x / (double) y);
        else 
            printf("divisao impossivel\n");
    }

    return 0;
}