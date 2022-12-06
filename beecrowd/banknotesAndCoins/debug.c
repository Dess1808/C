#include<stdio.h>
#include<cs50.h>

//testar a contagem de moedas (valores muito baixos, precisao maior)
//1, 0.50, 0.25, 0.10, 0.05 e 0.01

int main(void)
{
    float valor = get_float("valor a ser contado: ");

    int count1 = 0;
    int count050 = 0;

    while(valor >= 1)
    {
        count1++;
        valor -= 1;
    }

    while(valor >= 0.50)
    {
        count050++;
        valor -= 0.50;
    }

    printf("%d moeda(s) de R$ 1.00\n", count1);
    printf("%d moeda(s) de R$ 0.50\n", count050);

}