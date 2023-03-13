#include<stdio.h>
#include<math.h>

int main(void)
{
    //control variable
    int n = 0;

    //input with condition
    do
    {
        scanf("%d", &n);
    } while (n < 1 && n > 1000);

    for (int i = 1; i <= n; i++)
    {
        //output
        printf("%d %.0f %.0f\n", i, pow(i, 2), pow(i, 3));
        printf("%d %.0f %.0f\n", i, (pow(i, 2) + 1), (pow(i, 3) + 1));
    }
    
    return 0;
}