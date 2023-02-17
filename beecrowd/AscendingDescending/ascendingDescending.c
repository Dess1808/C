#include<stdio.h>

int main(void)
{
    int x = 0;
    int y = 0;

    while(1)
    {
        //input
        scanf("%d %d", &x, &y);

        //logic main
        if (x == y)
            break;
        else if (x > y)
            printf("Decrescente\n");
        else 
            printf("Crescente\n");
    }

    return 0;
}
