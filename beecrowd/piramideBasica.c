#include<stdio.h>

//1 - 10, diferente disso continue perguntado

int main()
{
    //lixo de memoria
    int n = 0;
    int controle = 0;

    //input 
    scanf("%d", &n);

    int auxiliar  = n;

    //esquerdo
    for (int a = 0; a < auxiliar; a++)//linhas
    {
        n--;
        controle++;

        for (int i = 0; i < n; i++) //colunas
        {
            putchar(' ');
        }

        //esquerdo
        for (int j = 0; j < controle; j++) //
        {
            printf("#");
        }

        //direito
        for (int j = 0; j < controle; j++) //
        {
            printf("#");
        }

        //new line
        putchar('\n');
    }
    
    return 0;
}
