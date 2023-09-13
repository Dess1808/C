#include<stdio.h>
#include<ctype.h>

char *strlower(char *s);

int main(int argc, char const *argv[])
{
    char word[100];

    scanf("%s", word);

    printf("%s\n", strlower(word));

    return 0;
}

char *strlower(char *s)
{
    for(int i = 0; s[i] != '\0'; i++)
        s[i] = tolower(s[i]);
    
    return s;
}