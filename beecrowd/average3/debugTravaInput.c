#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

int main(void)
{
    //e se a entrada for em string
    char *n;
    
    do
    {
        scanf("%s", n);
        printf("%.1f\n", atof(n));
    } while (atof(n) == 0.0);

    return 0;
}

