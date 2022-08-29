#include<stdio.h>

#define RAND 7

//grande numero aleatorio
int main(void)
{

    int count = 0;

    //imprimindo uma grande
    for(int i = 0; i < RAND; i++)
    {
        for(int j = 0; j < RAND; j++)
        {
            printf("%2d ", count +=1 );
        }
        printf("\n");
    }

    //new line
    printf("\n");
    return 0;
}