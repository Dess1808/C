/*
  adicionar espacos em branco em uma palavra  
*/

#include<stdio.h>
#include<string.h>
#include<cs50.h>

char *strBlank(char *s, char *blankWord);

int main(void)
{
    //control variable
    char *word;
    
    scanf("%s", word);

    int newSize = strlen(word) * 2;

    //precisa ser defindo se for retornado
    char blankWord[newSize];

    //output
    printf("%s\n", strBlank(word, blankWord));

    return 0;
}

char *strBlank(char *s, char *blankWord)
{
    int origin = 0;

    for (int i = 0; s[origin] != '\0'; i+=2)
    {
        blankWord[i] = s[origin];
        
        //utilizando array original para determinar espacos
        if (s[origin + 1] != '\0')
            blankWord[i+1] = ' ';

        origin++;
    }

    return blankWord;
}