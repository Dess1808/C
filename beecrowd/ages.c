#include<stdio.h>

int main(void)
{
    //control variable
    int age = 0;
    int count = 0;
    int sumAge = 0;

    //input with repetition
    while(1)
    {   
        //input
        scanf("%d", &age);

        if (age < 0)
            break;
        else 
        {
            sumAge += age;
            count++;
        }
    }

    //output 
    printf("%.2f\n", (float) sumAge / count);

    return 0;
}