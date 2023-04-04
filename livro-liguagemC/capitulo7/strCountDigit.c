/**
 * utilizar isdigit();
*/

#include<stdio.h>
#include<ctype.h>

int StrCountDigit(char *f);

int main(void)
{
    //control variable
    char *frase;

    //input 
    scanf("%s", frase);

    //output
    printf("%d\n", StrCountDigit(frase));

    return 0;
}

int StrCountDigit(char *f)
{
    int countDigit = 0;

    for (int i = 0; f[i]; i++)
    {
        if (isdigit(f[i]))
            countDigit++;
    }   

    return countDigit;
}

