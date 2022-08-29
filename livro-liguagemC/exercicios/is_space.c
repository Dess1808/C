#include<stdio.h>
#include<cs50.h>
#include<ctype.h>

int main(void){
    char c = getchar();

    if(isspace(c)){
        printf("verdade\n");
    }else{
        printf("false\n");
    }
}