#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    //control variable
    int sizeInput = 0;
    int force = 0;

    char thor[] = "Thor";
    char hero[10];

    //input
    scanf("%d", &sizeInput);    

    //input + force
    for (int i = 0, size = sizeInput; i < size; i++)
    {
        scanf(" %s", hero);
        scanf("%d", &force);

        if (!strcmp(thor, hero))
            printf("Y\n");
        else 
            printf("N\n");
    }

    return 0;
}
