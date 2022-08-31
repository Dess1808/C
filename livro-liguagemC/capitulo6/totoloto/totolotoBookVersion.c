#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUMEROS 49
#define MINIMO_APOSTA 6
#define NUMERO_LINHA 7

//declarando funções
void Iniciador_Random();
void Iniciador_Vetor(int v[NUMEROS]);
int Ler_Numeros_Apostar();
void Gerar(int *v, int n); //preciso testar
void Apresentar(int resultado[]); 

