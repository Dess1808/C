#include<stdio.h>
#include<cs50.h>

//colocar tudo em uma array de inteiros

int Crescente(int a, int b, int c);
int Descrecente(int a, int b, int c);

int main(void)
{
    int a = get_int("A: ");
    int b = get_int("B: ");
    int c = get_int("C: ");

    //provavelmente terei que mandar tambem ja o array fazio
    *crescente = Crescente(a, b, c);
    *descrente = Descrecente(a, b, c);

    for(int i = 0; i != "\0"; i++)
    {
        printf("%d\n", crescente[i]);
    }

    printf("\n");

    for(int j = 0; j != "\0"; j++)
    {
        printf("%d\n", descrecente[j]);
    }

    return 0;
}

int Crescente(int a, int b, int c)
{
    //maior para o menor classico
    if()
}

int Descrecente(int a, int b, int c)
{

}
