#include<stdio.h>
#include<cs50.h>

int Is_alpha(char c);

int main(void){
    char c = getchar();

    if(Is_alpha(c)){
        printf("verdade\n");
    }else{
        printf("false\n");
    }
}

int Is_alpha(char c){
    if((c >= 97) && (c <= 122)){
        return 1;
    }else if((c >= 65)&&(c <=90)){
        return 1;
    }else{
        return 0;
    }
}