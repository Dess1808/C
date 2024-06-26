//a diferenca entre tudos nao pode ser maior que a altura maxima que o frog pode pular

#include<stdio.h>

int Absolute(int a, int b);

int main(void)
{
    int pipes  = 0;
    int height = 0;

    //input 
    scanf("%d%d", &height, &pipes);

    //pipes array
    int pipes_array[pipes];

    //input of pipes
    for (int i = 0; i < pipes; i++)
    {
        scanf("%d", &pipes_array[i]);
    }

    //win or gamer over
    for (int i = 0, n = pipes - 1; i < n; i++)
    {
        if (Absolute(pipes_array[i], pipes_array[i+1]) > height)
        {
            printf("GAMER OVER\n");
            return 0;
        }
            
    }

    //win
    printf("WIN\n");
    return 0;
}

int Absolute(int a, int b)
{
    int x = a - b;

    if (x < 0)
        return x * -1;
    else 
        return x;
}