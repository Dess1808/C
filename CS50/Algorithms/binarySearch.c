/*
    para o Binary search funcionar, e preciso alinhar a sequencia de numeros primeiro!

    worst-case-scenario = O(log N)
    best-case-scenario = (n)


    logic:
    If no doors left
        Return false
    If 50 is behind doors[middle]
        Return true
    Else if 50 < doors[middle]
        Search doors[0] through doors[middle - 1]
    Else if 50 > doors[middle]
        Search doors[middle + 1] through doors[n - 1]

    como calcular automaticamente o tamanho do array em c:
    https://www.scaler.com/topics/length-of-an-array-in-c/

*/

#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

int main(void)
{
    int target = 19;
    int start = 0;
    int end = 0;
    int middle = 0;

    int doors[] = {6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 23, 25, 30};
    
    //size of array
    int nSize = sizeof(doors);

    printf("size doors is %d\n", nSize);

    return 0;
}