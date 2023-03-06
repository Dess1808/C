/*
    loop enquanto a opcao for 1 - sim, senao, 2 - nao
*/

#include<stdio.h>

void ShowStatisticGrenal(int grenais, int inter, int gremio, int draws);
int setChoiceNewGrenal();

int main(void)
{
    //control variables
    int interGol = 0;
    int gremioGol = 0;
    int controlNewGrenal = 0;

    int grenais  = 0;
    int inter = 0 ;
    int gremio = 0;
    int draws  = 0;

    while (1)
    {
        //input inter + gremio
        scanf("%d %d", &interGol, &gremioGol);

        //count statitics
        grenais += 1;

        //count points
        if (interGol > gremioGol)
            inter += 1;
        else if (interGol < gremioGol)
            gremio += 1;
        else
            draws += 1;

        //input choice new grenal
        controlNewGrenal = setChoiceNewGrenal();

        //selection choice
        if (controlNewGrenal == 1)
        {
            continue;
        }
        else if (controlNewGrenal == 2)
        {
            ShowStatisticGrenal(grenais, inter, gremio, draws);
            return 0;
        }
    }
}

int setChoiceNewGrenal()
{
    int cn = 0;

    do
    {
        //input choice
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &cn);

        //selection choice
        if (cn == 1)
            break;
        else if (cn == 2)
            break;

    } while (1);

    return cn;
}


void ShowStatisticGrenal(int grenais, int inter, int gremio, int draws)
{
    printf("%d grenais\n", grenais);

    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", draws);

    //selection for end printf
    if (inter > gremio)
        printf("Inter venceu mais\n");
    else if (inter < gremio)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");
}