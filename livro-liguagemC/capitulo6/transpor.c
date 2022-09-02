#include<stdio.h>

#define MAX 5

void Transpor(int v[MAX][MAX]);

int main(void)
{
    int array[MAX][MAX];

    //preenchendo o array de 2 dimensões
    for(int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
            array[i][j] = 0;
        }
    }

    //imprimindo array original
    for(int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
            printf("%d", array[i][j]);
        }
        putchar('\n');
    }
    
    putchar('\n\n');

    //mandando o trabalho para Transpor()
    Transpor(array);
}

void Transpor(int v[MAX][MAX])
{
    //preenchendo agora a matriz com 1
    for(int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
            v[i][j] = 1;
        }
    }

    //imprimindo
    for(int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
            printf("%d", v[i][j]);
        }
        putchar('\n');
    }
}



/*
    exercicio:
    implemente uma função que transpoe "v" com MAX por MAX elementos

    obs: irei apenas sobrepor o conteudo de v original para o que estiver dentro da função
    ja que o execicios não deixou claro que exatamente deveria ser feito
*/
