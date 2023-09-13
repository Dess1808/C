#include<stdio.h>
#include<ctype.h>

char *strup(char *s);

int main(int argc, char const *argv[])
{
    char word[100];

    scanf("%s", word);

    printf("%s\n", strup(word));

    return 0;
}

char *strup(char *s)
{
    for(int i = 0; s[i] != '\0'; i++)
        s[i] = toupper(s[i]);
    
    return s;
}