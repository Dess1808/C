#include<stdio.h>
#include<cs50.h>

//Devolve um valor logico que indica de o dobro de x é ou não igual a x^2

int is_special(int a, int b);

int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");

    if(is_special(x, y)){
        printf("o dobro de %i == %i^2\n", x, y);
    }else{
        printf("o dobro de %i != %i^2\n", x, y);
    }
}

int is_special(int a, int b){
    if(a * 2 == b * b){
        return 1;
    }else{
        return 0;
    }
}