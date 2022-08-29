#include<stdio.h>
#include<cs50.h>

//Devolve  um valor sempre negativo

int main(void){
    int x = get_int("x: ");

    if(x < 0){
        printf("%i\n", x);
    }else{
        printf("%i\n", x * -1);
    }

}