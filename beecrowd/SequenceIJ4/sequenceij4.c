/*
    doi ranges
    0.2 - 0.8
    1.2 - 1.8

    fora disso e inteiro

*/

#include<stdio.h>


int main(void)
{
    float i = 0;

    //rages define
    float ZEROTWO = 0.2;
    float ZEROEIGHT = 0.8;
    float ONETWO = 1.2;
    float ONEEIGHT = 1.80000019; //trabalhar melhor essa precisao, procurar por tecnicas que resolvam

    for (int a = 0; a <= 10; a++)
    {
        float j = 1;

        for (int b = 1; b <= 3; b++)
        {
            if (((i >= ZEROTWO) && (i <= ZEROEIGHT)) || ((i >= ONETWO) && (i <= ONEEIGHT)))
                printf("I=%.1f J=%.1f\n", i, i+j);
            else
                printf("I=%d J=%d\n", (int) i, (int) i + (int) j);

            j++;
        }

        i += 0.2;
    }

    return 0;
}