#include<stdio.h>
#include<cs50.h>
#include<ctype.h>

int main(void){
    char c = get_char("c: ");

    printf("%c\n", toupper(c));
}