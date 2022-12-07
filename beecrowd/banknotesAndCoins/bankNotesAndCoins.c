#include<stdio.h>

int main(void)
{
    //constantes notas e moedas
    //notas
    const int CEM = 100;
    const int CINQUENTA = 50;
    const int VINTE = 20;
    const int DEZ = 10;
    const int CINCO = 5;
    const int DOIS = 2;

    //coins
    const int COIN1 = 1;
    const double COIN050 = 0.50;
    const double COIN025 = 0.25;
    const double COIN010 = 0.10;
    const double COIN005 = 0.05;
    const double COIN001 = 0.01;

    double valor;

    //recebendo valores
    do
    {
        //esta faltando precisando no valor que e inserido!!!!!
        scanf("%lf", &valor);
    } while (valor <= 0 || valor >= 1000000.00);

    //contadores
    int countCem = 0;
    int countCinquenta = 0;
    int countVinte = 0;
    int countDez = 0;
    int countCinco = 0;
    int countDois = 0;
    int count1 = 0;
    int count050 = 0;
    int count025 = 0;
    int count010 = 0;
    int count005 = 0;
    int count001 = 0;

    //notas
    //100
    while(valor >= CEM)
    {
        countCem++;
        valor -= CEM;
    }

    //50
    while(valor >= CINQUENTA)
    {
        countCinquenta++;
        valor -= CINQUENTA;
    }

    //20
    while(valor >= VINTE)
    {
        countVinte++;
        valor -= VINTE;
    }

    //10
    while(valor >= DEZ)
    {
        countDez++;
        valor -= DEZ;
    }

    //5
    while(valor >= CINCO)
    {
        countCinco++;
        valor -= CINCO;
    }

    //2
    while(valor >= DOIS)
    {
        countDois++;
        valor -= DOIS;
    }


    //DEBUGAR
    //coins
    //1.00
    while(valor >= COIN1)
    {
        count1++;
        valor -= COIN1;
    }

    //0.50
    while(valor >= COIN050)
    {
        count050++;
        valor -= COIN050;
    }

    //0.25
    while(valor >= COIN025)
    {
        count025++;
        valor -= COIN025;
    }

    //0.10
    while(valor >= COIN010)
    {
        count010++;
        valor -= COIN010;
    }

    //0.05
    while(valor >= COIN005)
    {
        count005++;
        valor -= COIN005;
    }

    //0.01
    while(valor >= COIN001)
    {
        count001++;
        valor -= COIN001;
    }

    //output
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", countCem);
    printf("%d nota(s) de R$ 50.00\n", countCinquenta);
    printf("%d nota(s) de R$ 20.00\n", countVinte);
    printf("%d nota(s) de R$ 10.00\n", countDez);
    printf("%d nota(s) de R$ 5.00\n", countCinco);
    printf("%d nota(s) de R$ 2.00\n", countDois);
    printf("MOEDAS:\n");
    printf("%d nota(s) de R$ 1.00\n", count1);
    printf("%d nota(s) de R$ 0.50\n", count050);
    printf("%d nota(s) de R$ 0.25\n", count025);
    printf("%d nota(s) de R$ 0.10\n", count010);
    printf("%d nota(s) de R$ 0.05\n", count005);
    printf("%d nota(s) de R$ 0.01\n", count001);

    return 0;
}