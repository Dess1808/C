#include<stdio.h>
#define DM 3

int main(void){
    int velha[DM][DM] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}}, i, j;

    velha[0][0] = 'X';
    velha[1][1] = 'X';
    velha[0][2] = '0';
    velha[2][2] = '0';

    for(i = 0; i < DM; i++){
        for(j = 0; j < DM; j++){
            /*
                irá printar o valor que esta na matriz, 
                o proximo caracter será um espaço em branco ou um traço desenhando assim
                a hash que caracteriza o jogo "#"
            */
            printf("%c%c", velha[i][j], j == DM-1?' ':'|');
        }
        if(i != DM-1)
            printf("\n------\n");
    }

    printf("\n");
}