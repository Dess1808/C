#include<stdio.h>
#include<cs50.h>

/* String Count Char */

char strcountc(char *exemplo, char ch);

int main(void)
{
    string exemplo = get_string("string: ");
    char letra = get_char("letra: ");

    printf("%s (%c) - %i\n", exemplo, letra, strcountc(exemplo, letra));

}

char strcountc(char *exemplo, char ch)
{
    int i, count = 0;

    for(i = 0; exemplo[i] != '\0'; i++)
    {
        if(exemplo[i] == ch)
            count++;
    }

    return count;
}