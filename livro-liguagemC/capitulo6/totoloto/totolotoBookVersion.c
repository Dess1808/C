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

/*
    Inicia o gerador de numeros aleatorios com um numero que depende da hora que se
    executa a função
*/

void Iniciador_Random()
{
    long ultime;
    time(&ultime);
    srand((unsigned) ultime); //fazendo cast
}

/* inicia com zero o vetor de controle dos numeros selecionados*/
void Iniciador(int v[])
{
    for(int i = 0; i < NUMEROS; i++)
        v[i] = 0;
}

/*
    Lê o numeros da quantidade a apostar. Aceita valores entre MIN_APOSTA e NUMEROS.
    Aceita o valor de zero para indicar o termino do programa
*/

int Ler_Numeros_Apostar()
{
    int n;

    do
    {
        printf("Quantos números quer apostar? minimo de 6 apostas (0 - terminar): ");
        scanf("%d", &n);
    } while ((n < MINIMO_APOSTA || n > NUMEROS) && n != 0);

    return n;
}

/*
    Gera "n" numeros aleatorios e coloca a respectiva posição do vetor com o
    valor 1 que indica que esse numeros foi selecionado
*/

void Gerar(int *v, int n)
{
    int i, indice;
    for(i = 1; i < n; i++)
    {
        indice = rand() % NUMEROS; //Devolve números aleatorios entre 0 e NUMEROS - 1, é sorteado um números pelo indice mesmo!!
        if(v[indice] == 0)
        {
            v[indice] = 1;
            //debug
            //printf("%d", v[indice]);
        }
        else
        {
            i--;
        }
    }

    putchar('\n');

}


/*
    apresenta uma grade de numeros e o selecionados irão aparecer em formato de  XX.
*/

/*

*/
void Apresentar(int resultado[])
{
    for(int i = 0; i < NUMEROS; i++)
    {
        //percorrendo o vetor resultado ja com os numeros sorteados
        if(resultado[i] == 0)
            printf(" %2d", i + 1); //não foi selecionado
        else
            printf(" XX"); //foi selecionado

        if((i + 1) % NUMERO_LINHA == 0)
            putchar('\n');
    }

    putchar('\n');
}

int main(void)
{
    int vetor[NUMEROS];
    int quantidadeNumeros = 0; //quantidade de numeros para jogar no jogo - 6..49

    Iniciador_Random();
    while(1)
    {
        Iniciador(vetor); //iniciando o array com zero

        //o retorno de ler_Numeros_Apostar
        if((quantidadeNumeros = Ler_Numeros_Apostar()) == 0)
            break;

        Gerar(vetor, quantidadeNumeros); //Gera os numeros a apostar, não tem retorno
        Apresentar(vetor);
    }
}
