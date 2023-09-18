#include<stdio.h>
#include<string.h>

char *Streaky(char *s, char *nw, int p1, int p2);

int main(void)
{
    char word[100];
    int position1, position2 = 0;

    //input 
    scanf("%s", word);
    scanf("%d", &position1);
    scanf("%d", &position2);

    //new word creation
    char newWord[strlen(word)];

    //output
    printf("%s\n", Streaky(word, newWord, position1, position2));

    return 0;    
}

char *Streaky(char *s, char *nw, int p1, int p2)
{
    int indexNw = 0;

    for (int i = p1; i < p2; i++)
    {
        nw[indexNw] = s[i];
        indexNw++;
    }

    nw[indexNw] = '\0';
    
    return nw;
}