/*
    preencher todo o array de 3 e depois cruzar 1 e 2

    HIPOTESE 1:
    utilizar matematica

    - a diferenca entre 1 e 2 e sempre será as posicoes -2 na interação +1 (proxima)
    interação.

    - pego o valor de n e divido por 2 arredondando para + (tenho o index da metado do vetor)

    - primeira posicoes fixas para toda matris 0,0 -> e 1, n - 1 -> 2

    HIPOTESE 2:
    Pura manipulação de index com condição

    - sempre para o numero 1 os index sao iguais

    - para o numero dois, e index da row com o index da column "n - 1", e continuar subtraindo a cada repeticao do for row, ate n ser 0 
    assim, formando um x de 1 e 2 para qualquer tamanho de array bidimensional.
*/

#include<stdio.h>

void Show(int n, int array123[n][n]);
void Fill(int n, int array123[n][n]);

const int ONE = 1;
const int TWO = 2;
const int DEFAULTVALUE = 3;

int main(void)
{
    //variable control
    int n = 0;
    int sizeAux = 0;

    //input with condition 
    while(scanf("%d", &n) != EOF) //end of file - caracterisita da linguagem
    {
        //reset variable
        sizeAux = 0;

        //array bid create
        int array123[n][n];

        //filling with the number three
        Fill(n, array123); 

        //sizeAux for number TWO, start last position
        sizeAux = n - 1;

        //make to X
        for (int i = 0, size = n; i < size; i++) //row
        {
            for (int j = 0, size = n; j < size; j++)//column
            {
                //condition for one
                if (i == j)
                    array123[i][j] = ONE;

                //condition for two
                if (j == sizeAux)
                    array123[i][j] = TWO;
            }

            //update variable
            sizeAux--;

        }//end for row

        //output
        Show(n, array123);
    }

    return 0;
}


void Fill(int n, int array123[n][n])
{
    for (int i = 0; i < n; i++)//row
    {
        for (int j = 0; j < n; j++) //column
        {
            array123[i][j] = DEFAULTVALUE;
        }
    }
}

void Show(int n, int array123[n][n])
{
    for (int i = 0; i < n; i++)//row
    {
        for (int j = 0; j < n; j++) //column
        {
            printf("%d", array123[i][j]);
        }

        putchar('\n');
    }
}
