#include<stdio.h>
#include<string.h>

int main(void)
{
    //controle variable
    char word[100];
    char checkChar;

    //input
    scanf("%[^\n]", word);

    //size control
    int nSize = strlen(word);
    int indexNewWord = 0;

    //string result
    char newWord[nSize];    

    for (int i = 0; i < nSize; i++)
    {
        if (word[i] != word[i+1])
        {
            newWord[indexNewWord] = word[i];
            indexNewWord++;
            continue;
        }   
        else 
        {
            continue;
        }
    }

    //end string
    newWord[indexNewWord] = '\0';

    //output 
    printf("%s\n", newWord);

    return 0;
}