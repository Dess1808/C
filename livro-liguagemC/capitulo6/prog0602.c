#include<stdio.h>
#include<cs50.h>

int main(void){
    float salario[13];
    float total_salario = 0;

    for(int i = 1; i <= 12; i++){
        salario[i] = get_int("valor salario mes %i: ", i);
        total_salario += salario[i];
    }

    for(int j = 1; j <= 12; j++){
        printf("mes %i = %.2f\n", j, salario[j]);
    }

    printf("total salario: %.2f\n", total_salario);
}