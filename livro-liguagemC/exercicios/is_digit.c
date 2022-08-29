#include<stdio.h>
#include<cs50.h>

int is_digit(char c);

int main(void){
    char c = get_char("input: ");

    if(is_digit(c)){
        printf("verdade\n");
    }else{
        printf("falso\n");
    }
}

int is_digit(char c){
    if((c >= 48) && (c <= 57)){
        return 1;
    }else{
        return 0;s
    }
}