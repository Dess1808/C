#include<stdio.h>

//iniciador de vetor com todos os valores 0
/*vetor sem dimensão - o compilador ignora a dimensao se inserida*/
void inic1(int s[], int n){
    for(int i = 0; i < n; i++)
        s[i] = 0;
}

int main(void){
    int v[10];
    int b[20];

    inic1(v,10);
    inic1(v,20);
}