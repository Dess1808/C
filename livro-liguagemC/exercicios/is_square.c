#include<stdio.h>
#include<cs50.h>

//Devolve um valor logico que indica se x é ou não igual a y^2

int is_square(int a, int b);

int main(void){

    int x = get_int("x: ");
    int y = get_int("y: ");

    if(is_square(x, y)){
        printf("%i == %i^2!\n", x, y);
    }else{
        printf("%i != %i^2!\n", x, y);
    }
}

int is_square(int a, int b){
    if(a == b * b){
        return 1;
    }else{
        return 0;
    }
}