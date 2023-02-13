/*
    main formule
    ((numbers[j] * 2) + (numbers[j+1] * 3) + (numbers[j+2] * 5)) / 3 
*/

#include<stdio.h>

#define sizeFixed 3

int main(void)
{
    //controle variable
    int n = 0;
    int weight = 2 + 3 + 5;

    //input 
    scanf("%d", &n);

    int sizeLine = n;

    //create matrix
    double numbers[sizeLine][sizeFixed];

    //input with array two dimision
    for (int i = 0 ; i < sizeLine; i++)
    {
        scanf("%lf%lf%lf", &numbers[i][0], &numbers[i][1], &numbers[i][2]);
    }

    //calc with output
    for (int i = 0; i < sizeLine; i++)
    {
        printf("%.1lf\n", ((numbers[i][0] * 2) + (numbers[i][1] * 3) + (numbers[i][2] * 5)) / weight);
    }

    return 0;
}