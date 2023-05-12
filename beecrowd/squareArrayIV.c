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
#include<math.h>

#define ZERO 0
#define ONE 1
#define TWO 2
#define THREE 3 
#define FOUR 4

void Fill(int element, int size, int squareArray[size][size]);
void Show(int size, int squareArray[size][size]);


int main(void)
{
    //control variable
    int n = 0;
    int rowPosition = 0;
    int columnPosition = 0;
    int startPosition = 0;
    int newN = 0;
    int middle = 0;
    

    //end file
    while(scanf("%d", &n) != EOF)
    {
        //reset variable
        rowPosition = 0;
        columnPosition = 0;
        startPosition = 0;
        newN = 0;
        middle = 0; 

        //create arrayBi
        int squareArray[n][n];

        //fill with 0
        Fill(ZERO, n, squareArray);

        //fill inside with 1
        startPosition = n / 3;
        rowPosition = startPosition;

        for(int i = 0, newN = n - (n / 3) * 2; i < newN; i++)//row
        {
            columnPosition = startPosition;

            for (int j = 0; j < newN; j++)
            {
                squareArray[rowPosition][columnPosition] = ONE;

                columnPosition++;
            }

            rowPosition++;
        }


        //diagonals top
        //size for repetition
        newN = n / 3;

        //upLeft with 2
        rowPosition = 0;
        columnPosition = 0;

        for (int i = 0; i < newN; i++)
        {
            squareArray[rowPosition][columnPosition] = TWO;

            rowPosition++;
            columnPosition++;
        }
        
        //upRight with 3
        rowPosition = 0;
        columnPosition = n - 1;

        for (int i = 0; i < newN; i++)
        {
            squareArray[rowPosition][columnPosition] = THREE;

            rowPosition++;
            columnPosition--;
        }
        

        //diagonals bottom
        //bottom left with 3
        rowPosition = n - 1;
        columnPosition = 0;

        for (int i = 0; i < newN; i++)
        {
            squareArray[rowPosition][columnPosition] = THREE;

            rowPosition--;
            columnPosition++;
        }
        
        //bottom right with 2
        rowPosition = n - 1;
        columnPosition = n - 1;

        for (int i = 0; i < newN; i++)
        {
            squareArray[rowPosition][columnPosition] = TWO;

            rowPosition--;
            columnPosition--;
        }
    
        
        //middle four
        middle = n / 2;
        squareArray[middle][middle] = FOUR;

        //output 
        Show(n, squareArray);

        putchar('\n');
    }

    return 0;
}

void Fill(int element, int size, int squareArray[size][size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            squareArray[i][j] = element;
        }
    }
}

void Show(int size, int squareArray[size][size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d", squareArray[i][j]);
        }

        putchar('\n');
    }
}
