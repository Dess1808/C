#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define RAND 7
#define QUANTIDADE 50

//grande numero aleatorio
int main(void)
{
    //gerando um numero aleatorio para ser utilizado pelo rand()
    srand(time(NULL));

    //imprimindo uma grande
    for(int i = 0; i < RAND; i++)
    {
        for(int j =0; j < RAND; j++)
        {
            printf("%2d ", rand() % QUANTIDADE);
        }
        printf("\n");
    }

    //new line
    printf("\n");
    return 0;
}