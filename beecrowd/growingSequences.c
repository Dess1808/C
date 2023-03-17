#include<stdio.h>

int main(void)
{
    //variable
    int n = 0;

    while(1)
    {
        //input
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            //output
            printf("%d", i);

            //new line apenas quando nao for a ultiam 
            if (i != n)
                printf(" ");
        }

        //break without new line
        if (n == 0)
            break;


        //newline
        putchar('\n');
        
        
    }

    return 0;
}