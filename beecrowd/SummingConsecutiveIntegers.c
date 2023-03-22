#include<stdio.h>
#include<math.h>

int main(void)
{
    int n = 0;
    int a = 0;
    int resul = 0;

    //input without condition
    scanf("%d", &a);
    
    
    do
    {
        //input with condition
        scanf("%d", &n);
    } while ((n <= 0));

    //calc
    while(n)
    {
        resul += a++; //somando o a n vezes porem, com + 1
        n--; //control repetition
    }

    //output 
    printf("%d\n", resul);

    return 0;
}

