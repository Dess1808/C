 /*
    logic basic:
    quadrante 1:
    x (> 0) && y (> 0)

    quadrante 2:
    x (< 0) && y (> 0)
    
    quadrante 3:
    x (< 0) && y (< 0)

    quadrante 4:
    x (> 0) && y (< 0)

    else
    NUll qualquer um == 0
 */

#include<stdio.h>

int main(void)
{
    //variable control
    int x = 0;
    int y = 0;

    //loop main
    while(1)
    {   
        //input
        scanf("%d %d", &x, &y);

        //logic selection
        //One
        if ((x > 0) && (y > 0))
            printf("primeiro\n");
        else if ((x < 0) && (y > 0)) //two;
            printf("segundo\n");
        else if ((x < 0) && (y < 0)) //three
            printf("terceiro\n");
        else if ((x > 0) && (y < 0)) //four
            printf("quarto\n");
        else 
            break;
    }

    return 0;
}