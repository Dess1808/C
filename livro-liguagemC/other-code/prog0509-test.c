#include<stdio.h>
#include<cs50.h>

//65 - 90 A -Z
//97 - 122 a - z

int isDigit(char c);

int main(void)
{
    char ch = get_char("ch: ");
    
    if((!isDigit(ch)) == 0)
    {
        printf("Is a digit!\n");
    }
    else
    {
        printf("No a digit!\n");
    }
}

int isDigit(char c)
{
    int b = (c >= 48 && c <= 59);
    return b;
}