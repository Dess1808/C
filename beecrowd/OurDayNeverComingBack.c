/*
    Søren Kierkegaard's
    Life is not a problem to be solved, but a reality to be experienced.

    life is not a Problem to be solved.
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    //control variable
    char quoteSoren[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int numberLetter = 0;

    //input
    scanf("%d", &numberLetter);

    //output
    for (int i = 0, size = numberLetter; i < size; i++)
    {
        printf("%c", quoteSoren[i]);
    }
    
    putchar('\n');

    return 0;
}
