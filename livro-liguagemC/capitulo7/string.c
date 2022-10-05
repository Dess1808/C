#include<stdio.h>

char *func() //Significa que a saida e uma string!!!!
{
    char *s = "abc"; //se e uma string, porque não posso declarar de outra forma???
    return s;
}

int main(void)
{
    char *s = "uma string\n";
    char t[] = "uma string\ncom duas linhas\n";

    printf("%s",s);
    printf("%s", t);

    printf("%s\n", func());
    return 0;
}