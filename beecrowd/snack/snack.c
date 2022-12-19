#include<stdio.h>

int main(void)
{
    int codeUm = 1;
    int codeDois = 2;
    int codeTres = 3;
    int codeQuatro = 4;
    int codeCinco = 5;

    float cachorroQuante = 4.00;
    float xSalada = 4.50;
    float xBacon = 5.00;
    float TorradaSimples = 2.00;
    float Refrigerante = 1.50;

    int codigo = 0;
    int quantidade = 0;

    float total;

    scanf("%d%d", &codigo, &quantidade);

    switch (codigo)
    {
    case 1:
        total = quantidade * cachorroQuante;
        printf("Total: R$ %.2f\n", total);
        break;
    
    case 2:
        total = quantidade * xSalada;
        printf("Total: R$ %.2f\n", total);
        break;
    
    case 3:
        total = quantidade * xBacon;
        printf("Total: R$ %.2f\n", total);
        break;
    
    case 4:
        total = quantidade * TorradaSimples;
        printf("Total: R$ %.2f\n", total);
        break;

    case 5:
        total = quantidade * Refrigerante;
        printf("Total: R$ %.2f\n", total);
        break;
    
    default:
        break;
    }

    return 0;

}