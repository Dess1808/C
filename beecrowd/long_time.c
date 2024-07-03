//calcular com base no ano 2015

#include<stdio.h>


//VERIFICAR DEBUG
int main(void)
{
    int year = 0;
    int n = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &year);

        if (year == 2015)
        {
            printf("1 A.C\n");
        }
        else if((year - 2015) < 0)
        {
            printf("%d D.C\n", (year - 2015) * -1);
        }
        else 
        {
            printf("%d A.C\n", (year - 2015));
        }

        //reset
        year = 0;
    }

    return 0;

}