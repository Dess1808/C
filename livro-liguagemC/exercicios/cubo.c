#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void){
    int x = get_int("x: ");

    printf("%i^3 = %.0f\n", x, pow(x, 3));
}