#include<stdio.h>
#include<math.h>

int main(void)
{
    int n = 0;
    int a = 0;

    //input without condition
    scanf("%d", &a);

    do
    {
        //input with condition
        scanf("%d", &n); 
    } while ((n <= 0));

    //calc
    printf("%d\n", (a + n) + n);

    return 0;
}