#include<stdio.h>
#include<string.h>

int main(void)
{
    int number = 0;

    //output
    scanf("%d", &number);

    //UNIDADE DE MILHAR
    if (number >= 1000)
    {
        number -= 1000;
        printf("M");
    }

    //CETENAS
    if (number >= 900)
    {
        number -= 900;
        printf("CM");
    }

    if (number >= 800)
    {
        number -= 800;
        printf("DCCC");
    }

    if (number >= 700)
    {
        number -= 700;
        printf("DCC");
    }

    if (number >= 600)
    {
        number -= 600;
        printf("DC");
    }

    if (number >= 500)
    {
        number -= 500;
        printf("D");
    }

    if (number >= 400)
    {
        number -= 400;
        printf("CD");
    }

    if (number >= 300)
    {
        number -= 300;
        printf("CCC");
    }

    if (number >= 200)
    {
        number -= 200;
        printf("CC");
    }

    if (number >= 100)
    {
        number -= 100;
        printf("C");
    }
    
    //DEZENAS
    if (number >= 90)
    {
        number -= 90;
        printf("XC");
    }

    if (number >= 80)
    {
        number -= 80;
        printf("LXXX");
    }

    if (number >= 70)
    {
        number -= 70;
        printf("LXX");
    }

    if (number >= 60)
    {
        number -= 60;
        printf("LX");
    }

    if (number >= 50)
    {
        number -= 50;
        printf("L");
    }

    if (number >= 40)
    {
        number -= 40;
        printf("XL");
    }

    if (number >= 30)
    {
        number -= 30;
        printf("XXX");
    }

    if (number >= 20)
    {
        number -= 20;
        printf("XX");
    }

    if (number >= 10)
    {
        number -= 10;
        printf("X");
    }

    //UNIDADES

    if (number == 9)
        printf("IX");
    
    if (number == 8)
        printf("VIII");

    if (number == 7)
        printf("VII");

    if (number == 6)
        printf("VI");

    if (number == 5)
        printf("V");

    if (number == 4)
        printf("IV");

    if (number == 3)
        printf("III");

    if (number == 2)
        printf("II");

    if (number == 1)
        printf("I");


    putchar('\n');

    return 0;    
}