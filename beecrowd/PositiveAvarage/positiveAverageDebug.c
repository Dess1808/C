/*
    verificar a ocorrencias de numeros positivos
    dos positivos, verificar media
*/

#include<stdio.h>

#define SIZE 6

int main(void)
{
    //control variable
    double numbers[SIZE];
    double sumAll = 0;
    int countPositives = 0;

    //input
    scanf("%lf", &numbers[0]);
    scanf("%lf", &numbers[1]);
    scanf("%lf", &numbers[2]);
    scanf("%lf", &numbers[3]);
    scanf("%lf", &numbers[4]);
    scanf("%lf", &numbers[5]);

    //logic
    for (int i = 0; i < SIZE; i++)
    {
        if(numbers[i] > 0)
        {
            countPositives++;
            sumAll += numbers[i];
        }   
    }

    //output
    printf("%d valores positivos\n", countPositives);
    printf("%.1lf\n", sumAll / countPositives);

    return 0;
}