#include<stdio.h>

int main(void)
{
    //control variable
    int x = 0;
    int y = 0;
    int count = 0;

    //x
    scanf("%d", &x);
    
    //y
    scanf("%d", &y);

    //output with loop
    while(1)
    {
        for (int i = 0; i < x; i++)
        {
            count++;

            if (count < y)
            {
                //output main
                printf("%d", count);

                //blank
                if (i != (x - 1))
                    printf(" ");
            }
            else // == y
            {
                printf("%d", count);
                putchar('\n');
                return 0;
            }      
        }

        //newline
        putchar('\n');
    }

}