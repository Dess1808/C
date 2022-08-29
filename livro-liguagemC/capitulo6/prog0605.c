#include<stdio.h>

const int NUM = 10;
// #define NUM 10

//funcao que popula vetor com 0
void inic1(int s[]){
    for(int i = 0; i < NUM; i++)
        s[i] = 0;
}

int main(void){
    int v[NUM], i;

    inic1(v);

    //populando o array que ja esta com os valores 0
    for(i = 0; i < NUM; i++)
        v[i] = i;

    //mostrando em tela do maior para o menor
    for(i = NUM-1; i >= 0; i--)
        printf("%d\n", v[i]);
}