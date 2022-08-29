#include<stdio.h>
#include<cs50.h>

int Pot(int n, int x);

int main(void){
    int x = get_int("X: ");
    int n = get_int("n: ");
    printf("%i ^ %i = %i\n", x, n, Pot(n, x));
}

int Pot(int n, int x){
    if(n != 0){
        int res = 0;
        for(int i = 0, count = n; i < count; i++){
            x = x * n;
    }

        return x;
    }
    else{
        return 1;
    }
}