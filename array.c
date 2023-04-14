#include<stdio.h>

//matriz preenchida e com uma entrada de valor encontrar tal valor na matriz, se tiver

int main(void)
{
    int matriz[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int array[4] = {1, 2, 3, 4}; //posicao - 1
    int n = 0;

    scanf("%d", &n);

    //verificando na matriz
    for (int i = 0; i < 4; i++) //4
    {
        for (int j = 0; j < 4; j++) //4
        {
            //condicao
            if (matriz[i][j] == n) //verificar se n esta na matriz
                printf("%d esta na matriz\n", n); //verdade
        }
    }


    //percorrer arrays (vetores)
    //automatico, repeticao
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", array[i]);    
    }

    printf("\n");
    printf("\n");

    //manaul
    printf("%d\n", array[0]);    
    printf("%d\n", array[1]);    
    printf("%d\n", array[2]);    
    printf("%d\n", array[3]);    
}