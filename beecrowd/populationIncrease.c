/*
  aplicando porcentagem
  resulPA = ((PA * G1) /100) + PA  
  resulPB = ((PB * G2) /100) + PB  

output:
    resultPA - resultPB

    nao trabalhar com a diferenca entre anos e sim com um contador, pos a taxa de crescimento da
    cidade A e maior que a B, sendo assim, a cada interecao, A fica mais proximo de de B, ate ser maior que B.
    quantas vezes isso demorou para acontecer e o nosso resultado. taxa fica acumulando 
*/

#include<stdio.h>

#define CENTURY 100

int main(void)
{
  //controle variable
  int t = 0;
  int pa, pb, popIncrese, countYear = 0;
  float g1, g2;

  //input count
  scanf("%d", &t);

  for (int i = 0; i < t; i++)
  {
    //input 
    scanf("%d %d %f %f", &pa, &pb, &g1, &g2);

    countYear = 0;

    while(1)
    {
      //calc pa and pb, acumulador de taxa de crescimento
      pa += (int)(((double)pa * g1) / 100);
      pb += (int)(((double)pb * g2) / 100);

      countYear++;

      //end condition
      if (pa > pb)
        break;
    }

    //selection output
    if (countYear > CENTURY)
      printf("Mais de 1 seculo.\n");
    else 
      printf("%d anos.\n", countYear);
  }

  return 0;
}