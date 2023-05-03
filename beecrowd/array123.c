/*
    preencher todo o array de 3 e depois cruzar 1 e 2
*/

#include<stdio.h>

void Show(int n, int array123[n][n]);
void Fill(int n, int array123[n][n]);

const int ONE = 1;
const int TWO = 2;

int main(void)
{
    int n = 0;

    //input
    scanf("%d", &n);

    //matriz create
    int array123[n][n];

    //preenchendo com tres
    Fill(n, array123); 

    //make to X
    for (int i = 0; i < n; i++) //
    {
        
    }
}