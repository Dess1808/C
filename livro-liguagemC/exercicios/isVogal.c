#include<stdio.h>
#include<cs50.h>

/*
    verifica se ch e uma das vogais do alfabeto (maiuscula e minuscula).
        
    a - 65, 97
    e - 69, 101
    i - 73, 105
    o - 79, 111
    u - 87, 117
*/

void Is_vogal(char ch);

int main(void){
    printf("Insira algum valor\n");
    char ch = getchar();

    Is_vogal(ch);  
}

void Is_vogal(char ch){
    switch (ch){
        case 65: //A
            printf("%c e uma vogal\n", ch);
            break;
        case 97: //a
            printf("%c e uma vogal\n", ch);
            break;
        case 69: //E
            printf("%c e uma vogal\n", ch);
            break;
        case 101: //e
            printf("%c e uma vogal\n", ch);
            break;
        case 73: //I
            printf("%c e uma vogal\n", ch);
            break;
        case 105: //i
            printf("%c e uma vogal\n", ch);
            break;
        case 79: //O
            printf("%c e uma vogal\n", ch);
            break;
        case 111: //o
            printf("%c e uma vogal\n", ch);
            break;
        case 87: //U
            printf("%c e uma vogal\n", ch);
            break;
        case 117: //u
            printf("%c e uma vogal\n", ch);
            break;
        default:
            printf("valor inserido não é uma vogal\n");
    }
}