#include<stdio.h>
#include<time.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>

#define QUANTIDADE_GRADE 49
#define NEW_LINE 7

void geradorAleatorios(int *v, int ad);

int main(void)
{
    //valor apostar, dimensao
    int apostaDimensao = get_int("Quantos números quer apostar? (0 - terminal): ");

    //variaveis controle + vetorAleatorio
    int vetorAleatorio[apostaDimensao];

    //controle principal
    if(apostaDimensao != 0) 
    {
        /*
            GERANDO ALEATORIO
        */
        geradorAleatorios(vetorAleatorio, apostaDimensao);

        /*
            GERANDO GRADE + OUTPUT

            devo pegar cada numero gerado dos 49 e testar com os valores aleatorios
            ou pego os valores ordenados ja prontos e testo com os valores aleatorio 
            na hora da geração??, tenho que testar de qualquer jeito

            hipotese escolhida:
            sera feito à cada numero ordenado gerado, um teste na vetor de aleatorio
            se não constar, sera impressora normalmente, se constar, sera impresso um 
            " XX" com numero selecionado da aposta aleatoria
        */
        
        //controle dos ordenados
        int countOrdenado = 0;
        
        //nenhum numero foi marcado ainda
        bool controleMarcador = false;
         
        do
        {
            //quebra de linha controle
            for(int a = 0; a < NEW_LINE; a++)
            {
                //novo numero ordenado
                countOrdenado++;

                //check desse numero com o vetor de aleatorio
                for(int j = 0; j < apostaDimensao; j++)
                {
                    //se igual, valor deverá ser marcado, com "numero selecionado"
                    if(countOrdenado == vetorAleatorio[j])
                    {
                        controleMarcador = true;
                        break;
                    }
                }

                //controle marcador + output
                if(controleMarcador)
                {
                    //numero selecionado, posso marcar XX
                    printf("XX ");
                    //resetando o marcador para o proximo numero ordenado
                    controleMarcador = false;
                }
                else
                {
                    //devo apenas imprimir o numero ordenado
                    printf("%2d ", countOrdenado);
                }
            }

            printf("\n");

        }while (countOrdenado < QUANTIDADE_GRADE);
         
    }   
    else
    {
        return 1;
    }    
}



void geradorAleatorios(int *v, int ApDim)
{

    //gerando um valor do relogio de forma aleatorio
    srand(time(NULL));

    /*
        gerando o vetor de numero aleatorio sem 0 e sem repetição
    */

    int indexAtual = 0;
    
    //gerando o vetor de numero aleatorio sem 0 e sem repetição
    do
    {

        //gerando valor aleatorio + controle ocorrencia de 0
        do
        {
            v[indexAtual] = rand() % QUANTIDADE_GRADE;
        }
        while(v[indexAtual] == 0);

        /* 
            obs: entrar no modo de check somente quanto tiver dois 
            numeros no vetor
        */

        //check
        if(indexAtual > 0)
        {
            //reset de controle, começando sem igualdades
            bool controle = true;

            //loop de verificação do vetor
            for(int i = 0; i < indexAtual; i++)
            {   
                //check de igualdade
                if(v[i] == v[indexAtual])
                {
                    controle = false;
                    break;
                }
            } 

            //verificando o controle
            if(controle)
            {
                //posso atualizar o index para um novo proximo numero aleatorio
                indexAtual++;
            }
        }
        else
        {
            indexAtual++;
        }
    }
    while(indexAtual < ApDim);

    //vetor gerado
}

