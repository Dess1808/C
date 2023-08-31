#include<stdio.h>

int main(int argc, char const *argv[])
{
    //control variables
    int numberCases = 0;
    int cases = 0;

    //input
    scanf("%d", &numberCases);

    for (int i = 0, size = numberCases; i < size; i++)
    {
        //input 
        scanf("%d", &cases);


        //se numero impar = 1, par 0
        if ((cases % 2) == 0)
            printf("0\n");
        else 
            printf("1\n");
    }

    return 0;
}
