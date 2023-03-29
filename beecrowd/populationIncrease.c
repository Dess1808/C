/*
  aplicando porcentagem
  resulPA = ((PA * G1) /100) + PA  
  resulPB = ((PB * G2) /100) + PB  

output:
    resultPA - resultPB
*/

#include<stdio.h>

#define CENTURY 100

int main(void)
{
  //controle variable
  int t = 0;
  int pa, pb, popIncrese = 0;
  float g1, g2, resultPa, resultPb = 0.0;

  //input count
  scanf("%d", &t);

  for (int i = 0; i < t; i++)
  {
    //input 
    scanf("%d %d %f %f", &pa, &pb, &g1, &g2);

    //calc pa and pb
    resultPa = ((pa * g1) / 100) + pa;
    resultPb = ((pb * g2) / 100) + pb;

    //population increse result
    popIncrese = (int) resultPb - (int) resultPa;

    //selection output
    if (popIncrese >= CENTURY)
      printf("Mais de 1 seculo.\n");
    else 
      printf("%d anos.\n", popIncrese);
  }

  return 0;
}