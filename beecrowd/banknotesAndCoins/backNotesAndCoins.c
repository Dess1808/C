#include<stdio.h>

//constantes notas e moedas
//notas
const int CEM = 100;
const int CINQUENTA = 50;
const int VINTE = 20;
const int DEZ = 10;
const int CINCO = 5;
const int DOIS = 2;

//coins
const float COIN1 = 1.00;
const float COIN050 = 0.50;
const float COIN025 = 0.25;
const float COIN010 = 0.10;
const float COIN005 = 0.05;
const float COIN001 = 0.01;


int main(void)
{
    float valor = 0.0;

    //recebendo valores
    do
    {
        scanf("%f", &valor);
    } while (valor <= 0 || valor >= 1000000.00);
    
    //contadores
    int countCem, countCinquenta, countVinte, countDez, countCinco, countDois, count1, count050, count025, count010, count005, count001 = 0;

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
        countCem++;
        valor -= CINQUENTA;
    }

    //20
    while(valor >= CEM)
    {
        countCem++;
        valor -= CEM;
    }

    
}