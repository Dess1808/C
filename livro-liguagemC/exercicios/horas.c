/*
    devolve o numero de segundos existentes em um conjunto de horas.
    n_segundos(0) -> 0
    n_segundos(1) -> 3600
    n_segundos(2) -> 7200
*/

#include<stdio.h>
#include<cs50.h>

int n_segundos(int x);

int main(void){
    int x = get_int("hour: ");

    printf("%is\n", n_segundos(x));
}

int n_segundos(int x){
    return 60 * (60 * x);
}