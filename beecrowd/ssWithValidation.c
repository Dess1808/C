/*
    main logic:
    obter dois numeros calcular media, pedir se quer repetir o calculo
*/

#include<stdio.h>

float InputNumber();
void ShowMedia(float n1, float n2);
void ShowInvalid();
int NewCalc();

int main(void)
{
    float n1 = 0;
    float n2 = 0;
    int controlRepet = 0;

    while (1)
    {
        //input 
        n1 = InputNumber();

        //contition logic
        if ((n1 >= 0.0) && (n1 <= 10.0))
        {
            //new loop for n2
            while (1)
            {
                //input n2
                n2 = InputNumber();

                //condition for n2 + media
                if ((n2 >= 0.0) && (n2 <= 10.0))
                    ShowMedia(n1, n2);
                else 
                {
                    ShowInvalid();
                    continue;
                }

                //input control repet number
                controlRepet = NewCalc();
                
                //selection for new calc
                if (controlRepet == 1)
                    break;
                else if (controlRepet == 2)
                    return 0;
            }
        }
        else 
        {   
            ShowInvalid();
        }
    }
}

float InputNumber()
{
    float n = 0;

    scanf("%f", &n);

    return n; 
}

void ShowInvalid()
{
    printf("nota invalida\n");
}

void ShowMedia(float n1, float n2)
{
    printf("media = %.2f\n", ((n1 + n2) / 2));
}

int NewCalc()
{
    int cp = 0;

    do
    {
        //input opitions
        printf("novo calculo (1-sim 2-nao)\n"); scanf("%d", &cp);

        //finally or repeat
        if (cp == 1)
        {
            cp = 1;
            break;
        } //return for first loop while
        else if (cp == 2) 
        {
            cp = 2;
            break;
        }//finesh program
    } 
    while ((cp != 1) || (cp != 2));

    return cp;
}