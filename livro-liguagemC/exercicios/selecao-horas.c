/*
    Semelhante a  funcao anterior, so que recebe mais um parametro
    indicado aquilo que se saber 'h' - horas, 'm' - minutos, 's' - segundos
*/

#include<stdio.h>
#include<cs50.h>

int n_segundos(int x, char l);

int main(void)
{
    int x = get_int("horas: ");
    int l = get_char("h-(horas) | m-(minutos) | s-(segundos): ");

    printf("%i\n", n_segundos(x, l));
}

int n_segundos(int x, char l)
{
    switch (l)
    {
        case 'h':
        return x;
        break;

        case 'm': 
        return 60 * x;
        break;

        case 's': 
        return 60 * (60 * x);
        break;

        default:
        printf("letra incorreta ou maiuscula!");
        break;
    }
}