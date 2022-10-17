#include<stdio.h>
#include<cs50.h>

int StrCompara(char *s1, char *s2);

int main(void)
{
    string string1 = get_string("s1: ");
    string string2 = get_string("s2: ");

    if(StrCompara(string1, string2) == 0)
        printf("são os mesmos\n");
    else
        printf("não são os mesmos\n");
    
    return 0;
}

int StrCompara(char *s1, char *s2)
{
    
    if(s1 < s2)
    {
        return -1;
    }
    else if(s1 > s2)
    {
        return 1;
    }
    else
    {
        //s1 == s2, bit a bit
        for(int i = 0, n = strlen())
    }
}