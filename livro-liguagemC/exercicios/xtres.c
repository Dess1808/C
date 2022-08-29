#include<stdio.h>
#include<cs50.h>

int xtres(int a);

int main(void){
    int x = get_int("x: ");

    printf("%i^3 = %i\n", x, xtres(x));
}

int xtres(int a){
    int result = 1;

    for(int i = 0; i < 3; i++){
        result = result * 3;
    }

    return result;
}