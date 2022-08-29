#include<stdio.h>

void pontosTres();
void pontosCinco();
void pontosSete();

const int TRES = 3;
const int CINCO = 5;
const int SETE = 7;

int main(void)
{
    pontosTres();
    pontosCinco();
    pontosSete();
    pontosCinco();
    pontosTres();
    
}

void pontosTres()
{
    for(int i = 0; i < TRES; i++)
    {
        putchar('*');
    }
    putchar('\n');
}

void pontosCinco()
{
    for(int i = 0; i < CINCO; i++)
    {
        putchar('*');
    }
    putchar('\n');
}

void pontosSete()
{
    for(int i = 0; i < SETE; i++)
    {
        putchar('*');
    }
    putchar('\n');
}