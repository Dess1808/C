#include<stdio.h>
#include<cs50.h>
#include<ctype.h>

int main(void){
    char c = getchar();

    if(isupper(c)){
        printf("verdade\n");
    }else{
        printf("false\n");
    }
}