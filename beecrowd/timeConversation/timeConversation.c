#include<stdio.h>

#define SESSENTA 60

int main(void)
{
    int inputSegundo = 0;
    int segundo = 0;
    int minuto = 0;
    int hora = 0;
    int copiaMinuto = 0;

    //input
    scanf("%i", &inputSegundo);

    //logica
    if(inputSegundo >= SESSENTA)
    {
        //calculando segundo e minuto e tratando esses dados
        segundo = inputSegundo % SESSENTA;
        minuto = inputSegundo / SESSENTA;

        copiaMinuto = inputSegundo / SESSENTA;

        if(minuto > SESSENTA)
        {
            do
            {
                minuto -= SESSENTA;
            } while (minuto >= SESSENTA);
            
        }
        else if(minuto == SESSENTA)
        {
            //minuto sera 0
            minuto = 0;
        }

        //calculando a hora
        hora = copiaMinuto / SESSENTA;

        printf("%i:%i:%i\n", hora, minuto, segundo);
    }
    else
    {
        segundo = inputSegundo;

        //retornar o proprio segundo
        printf("%i:%i:%i\n", hora, minuto, segundo);
    }

    return 0;
}