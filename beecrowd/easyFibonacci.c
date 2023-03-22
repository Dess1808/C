/*
    formula principal

    repetir n - 2 vezes
    r = a + b;
    a = b;
    b = r;
    show(b);  
*/

#include<stdio.h>

void Show(int r);

int main(void)
{
    int n = 0; 

    //input
    scanf("%d", &n);
    

    if (n <= 2)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d", i);

            if (i != (n - 1))
                putchar(' ');
        }
    }
    else 
    {
    
        //retirando o valores iniciais da repeticao
        n -= 2;

        //control varaible 
        int r = 0;
        int a = 0;
        int b = 1;
        int control = 0;

        //valores iniciais, output padrao
        printf("%d %d ", a, b);

        //logic main
        while(1)
        {
            r = a + b;
            a = b;
            b = r;

            //output 
            Show(r);

            //control blanck
            if (control != (n - 1))
            {
                putchar(' ');
                control++;
            }
            else 
            {
                break;
            }
        }
    }

    //newline
    putchar('\n');

    return 0;
}

void Show(int r)
{
    printf("%d", r);
}