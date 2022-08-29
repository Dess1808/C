#include<stdio.h>
#include<cs50.h>

//debugar codigo!!

#define DM 3
#define SPACE ' '

void start(char s[ ][DM]){ //hidden one dimenson
    int i, j;
    for(int i = 0; i < DM; i++)
        for(int j = 0; j < DM; j++)
            s[i][j] = SPACE;
}

void show(char s[DM][DM]){//two dimenson
    int i, j;
    for(int i = 0; i < DM; i++){
        for(int i = 0; j < DM; j++){
            printf("%c%c", s[i][j], j==DM-1 ? ' ' : '|');
        }
        if(i != DM-1)
            printf("\n----------");
        putchar('\n');
    }
}

int main(void){
    char Velha[DM][DM];
    char ch = '0';//charcter for to game
    int count, x, y = 0;

    start(Velha);

    while(1){
        show(Velha);
        printf("\nInsira a Posicao do Jogo\n");
        x = get_int("x (linha): ");
        y = get_int("y (coluna): ");

        x--;
        y--;

        if(Velha[x][y] == SPACE){
            Velha[x][y] = ch = (ch == '0') ? 'X' : '0';
            count++;
        }else{
            printf("Posicao ja ocupada\nJoque novamente\n");
        }

        if(count == DM * DM)
            break;
    }

    show(Velha); //mostrando o resultado passando pela outra funcao, show!
}