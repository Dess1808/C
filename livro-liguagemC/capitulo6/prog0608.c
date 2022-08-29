//mais comentarios
#include<stdio.h>

//criando uma constante interia com o valor 10
const int n = 10;

int main(void){

    //criando um verto com essa constante
    int v[n];
    //criando um interio que sera utilizado com controle na estrutura de repitação
    int i = 0;

    //o que esta acontecendo aqui???
    for(i = 0; i < n; i++)
        v[i] = i * (n-1);

    for(i = 0; i < n; i++)
        printf("%d\n", v[i]);
}