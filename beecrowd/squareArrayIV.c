/*
    primeiro: preencher inteira com 0

    segundo: preencher uma matriz mais interna com 1, o tamanho dessa matriz sera
     size - (size / 3) * 2 

    terceiro: adicionar no centro da matriz o valor 4
    
    quarto: prencher as diagonais com 3 e 2, a quantidade de repetição sera size / 3
    tanto no topo como no fim da matriz, de cima para baixo, a distancias entre elas diminue 
    a cada repetição
*/

#include<stdio.h>

#define ZERO 0
#define ONE 1
#define TWO 2
#define THREE 3
#define FOUR 0

void FillTruncStart(int startPosition, int element,int size, int squareArray[size][size]);

int main(void)
{
    //control variable
    int n = 0;
    int nInside = 0;
    int startInside = 0;
    int controlSizeUpColumn = 0;
    int sizeUpColumn = 0;

    //end file
    while(scanf("%d", &n) != EOF)
    {
        //create arrayBi
        int squareArray[n][n];

        //fill with 0
        FillTruncStart(0, ZERO, n, squareArray);

        //width more inside
        nInside = n - ceil(n / 3) * 2;

        //start width
        startInside = n / 3;

        //fill more inside with one
        FillTruncStarts(startInside, ONE, nInside, squareArray);

        //number four center array
        squareArray[ceil(n/2)][ceil(n/2)] = FOUR;

        //diagonais 

        //up right
        for (int i = 0, sizeUpRow = n / 3; i < sizeUpRow; i++) //row
        {
            for (int j = 0; i < sizeUpColumn; j++)//column
            {
                squareArray[i][j] = TWO;
            }

            //update
            controlSizeUpColumn++;
            sizeUpColumn = controlSizeUpColumn;
        }

        //up left
        

    }

    return 0;
}