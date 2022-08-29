#include<stdio.h>
#include<cs50.h>

//65 - 90 A -Z
//97 - 122 a - z

void digitTest(char d);

int main(void)
{
    char digit = get_char("digit: ");
    digitTest(digit);
}

void digitTest(char d)
{
    //lower-case digit
    if(d >= 65 && d <= 90)
    {
        printf("%c is a digit!\n", d);
    }
    //up-case digit
    else if(d >= 97 && d <= 122)
    {
        printf("%c is a digit!\n", d);
    }
    else
    {
        printf("not is a digit\n");
    }
}

