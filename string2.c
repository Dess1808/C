#include<stdio.h>

int main(void)
{
    int sizeArray = 0;
    int sizeWord = 20;

    scanf("%d", &sizeArray);

    char nomes[sizeArray][sizeWord];

    for (int i = 0; i < sizeArray; i++)
    {
        scanf("%s", nomes[i]);
    }

    putchar('\n');

    //output
    for (int i = 0; i < sizeArray; i++)
    {
        printf("%s\n", nomes[i]);
    }
    
    return 0;
}