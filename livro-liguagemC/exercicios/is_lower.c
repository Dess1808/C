#include<stdio.h>
#include<cs50.h>

int Is_lower(char c);

int main(void){
    char c = getchar();

    if(Is_lower(c)){
        printf("verdade\n");
    }else{
        printf("false\n");
    }
}

int Is_lower(char c){
    if((c >= 97) && (c <= 122)){
        return 1;
    }else{
        return 0;
    }
}
