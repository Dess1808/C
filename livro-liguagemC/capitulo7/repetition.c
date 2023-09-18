#include<stdio.h>
#include<string.h>

int main(void)
{
    //controle variable
    char word[100];
    char newCheck;
    int indexNovaString = 0;

    //input
    scanf("%[^\n]", word);

    //before input
    char novaString[strlen(word)];

    //size array
    int nSize = strlen(word);

    for(int i = 0; i < nSize; i++)
    {
        newCheck = word[i];

        for(int j = 0; j < nSize; j++)
        {
            //test
            if(word[j] == word[i] && j == i) //desconsiderando o caracter que estamos testando
                continue;
            else if (word[j] == word[i])
            {
                novaString[indexNovaString] = word[j];
                indexNovaString++;

                //primeira ocorrencia, sai do laco
                break;
            }
        }
    }  

    //end string
    novaString[indexNovaString] = '\0';

    //output
    printf("%s\n", novaString);  

    return 0;
}