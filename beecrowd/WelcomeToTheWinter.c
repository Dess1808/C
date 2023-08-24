/*
    racunho:

    happy

    1 - Se a temperatura diminuiu do 1º para o 2º dia, 
    mas aumentou ou permaneceu constante do 2º para o 3º, 
    as pessoas estão felizes (primeira figura). 

    a > b && b <= c 

    2 - Se a temperatura aumentou do primeiro para o 
    segundo dia e do segundo para o terceiro, 
    mas aumentou do segundo para o terceiro pelo 
    menos tanto quanto tinha aumentado do primeiro 
    para o segundo, as pessoas estão felizes (quarta figura).

    (a < b && b < c) && (rateOfChangeOne == rateOfChangeTwo)

    3 - Se a temperatura diminuiu do primeiro para o segundo dia 
    e do segundo para o terceiro, mas diminuiu do segundo para o terceiro 
    menos do que tinha diminuído do primeiro para o segundo, as pessoas 
    estão felizes (quinta figura).

    (a > b && b > c) && (rateOfChangeOne > rateOfChangeTwo)



    Sad

    1 - Se a temperatura aumentou do primeiro para o segundo dia, 
    mas diminuiu ou permaneceu constante do segundo para o terceiro, 
    as pessoas estão tristes (segunda figura).
    a < b && b >= c

    2 - Se a temperatura aumentou do primeiro para o segundo dia e do segundo para 
    o terceiro, mas aumentou do segundo para o terceiro menos do que tinha 
    aumentado do primeiro para o segundo, as pessoas estão tristes 
    (terceira figura).
    a < b && b < c reateOne > reateTwo

    3 - Se a temperatura diminuiu do 1º para o 2º dia e do 2º para o 3º, 
    mas diminuiu do 2º para o 3º pelo menos o que tinha diminuído do 1º 
    para o 2º, as pessoas estão tristes (sexta figura).
    a > b && b > c


    happy or sad

    Se a temperatura permaneceu constante do 1º para o 2º dia, 
    as pessoas estão felizes se a temperatura aumentou do 2º 
    para o 3º dia, ou tristes caso contrário (respectivamente, 
    sétima e oitava figuras).

    obs:
    diferença = taxa de variação
    
*/

#include<stdio.h>

void Happy();
void Sad();

int main(void)
{
    int a, b, c = 0;
    int rateOfChangeOne, rateOfChangeTwo = 0;

    //input
    scanf("%d%d%d", &a, &b, &c);

    //taxa de variação 
    //one
    if (a > b)
        rateOfChangeOne = a - b;
    else 
        rateOfChangeOne = b - a;

    //two
    if (b > c)
        rateOfChangeTwo = b - c;
    else    
        rateOfChangeTwo = c - b;


    //logic main

    //happy
    if ((a > b) && (b <= c))
        Happy();
    else if ((a < b && b < c) && (rateOfChangeOne <= rateOfChangeTwo)) // verificar se precisar
        Happy();
    else if ((a > b && b > c) && (rateOfChangeOne > rateOfChangeTwo))
        Happy();
    else if ((a == b) && (b < c))
        Happy();
    else if ((a < b) && (b >= c))//sad 
        Sad();
    else if ((a < b && b < c) && (rateOfChangeOne > rateOfChangeTwo))
        Sad();
    else if ((a > b) && (b > c))
        Sad();
    else //constante mais diminui no final
        Sad();
         
    return 0;
}

void Happy()
{
    printf(":)\n");
}

void Sad()
{
    printf(":(\n");
}