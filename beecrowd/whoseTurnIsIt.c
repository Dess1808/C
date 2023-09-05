#include<stdio.h>
#include<string.h>

const int SIZENAME = 100;
const int SIZECHOOSE = 5;

int main(int argc, char const *argv[])
{
    //control variables
    long long int n, m = 0;
    int qt = 0;
    char name1[SIZENAME];
    char name2[SIZENAME];
    char choose1[SIZECHOOSE];
    char choose2[SIZECHOOSE];

    //colocar indentificadores para os nomes em relação a escolha
    char nameEven[SIZENAME];
    char nameOdd[SIZENAME];

    //input qt
    scanf("%d", &qt);

    for (int i = 0, size = qt; i < size; i++)
    {
        //input informations
        scanf(" %s%s%s%s", name1, choose1, name2, choose2);
        scanf("%lld%lld", &n, &m);

        //logic
        if (!strcmp(choose1, "PAR"))
        {
            //copy even
            strcpy(nameEven, name1);

            //copy odd
            strcpy(nameOdd, name2);
        }
        else
        {   
            //copy even
            strcpy(nameEven, name2);

            //copy odd
            strcpy(nameOdd, name1);
        }
        

        //calc
        if (((n + m) % 2) == 0)
            printf("%s\n", nameEven);
        else 
            printf("%s\n", nameOdd);

    }

    return 0;
}
