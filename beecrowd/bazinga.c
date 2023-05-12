/*
    como faco para saber se Sheldon ganhou ou perdou, (sheldon sempre esquerda)

    todas as combinacoes:

    tesoura - papel = tesoura vence! 4 (tesourapapel - tesoura)
    tesoura - lagarto = tesoura vence! 8 (tesouralagarto - tesoura)

    papel - rocha = papel vence! -2 (papelrocha)
    papel - Spock = papel vence! -3 (papelSpock)
    
    rocha - lagarto = rocha vence! 6 (rochalagarto)
    rocha - tesoura = rocha vence! -2 (rochatesoura)
    
    lagarto - Spock = lagarto vence! -7 (lagartospock)
    lagarto - papel = lagarto vence! -4  (lagartopapel)
    
    Spock - tesoura = Spock vence! -1 (spocktesoura)
    Spock - rocha = Spock vence! spockrocha
    
    palavras iguais = jogo empatado

    fazer teste para as duas combincoes possivel, diverente disso raj ganha

    outputs
    bazinga! - sheldon ganha
    Raj trapaceou! - sheldon perde
    De novo! - jogo empatado
*/

#include<stdio.h>
#include<string.h>

int const SIZEARRAY = 10;
int const SIZEWORD = 20;

void Show(char *s1, int r);

int main(void)
{
    //control variable center
    char bazingaArray[SIZEARRAY][SIZEWORD] = {"tesourapapel", "tesouralagarto", "papelrocha", "papelSpock", "rochalagarto", "rochatesoura", "lagartospock", "lagartopapel", "spocktesoura", "spockrocha"}; 
    char sheldon[10];
    char raj[10];
    char *game;

    int t = 0;
    int countCase = 1;
    int rajTrapaceou = 1;

    //input t times
    scanf("%d", &t);

    do
    {
        //reset variable
        rajTrapaceou = 1;

        //input games option
        scanf("%s%s", sheldon, raj);
        
        //if main DEBUGAR !!!
        if (strcmp(sheldon, raj) != 0)//not iquals
        {
            //concat of sheldon and raj
            game = strcat(sheldon, raj);

            //loop for bazinga
            for (int i = 0, size = SIZEARRAY; i < size; i++)
            {
                if (strcmp(game, bazingaArray[i]) == 0)
                {
                    Show("Bazinga!", countCase); 
                    rajTrapaceou = 0;
                    break;
                }      
            }

            //condition for raj
            if (rajTrapaceou)
                Show("Raj Trapacou!", countCase);
        } 
        else 
        {
            Show("De novo!", countCase);
        }

        countCase++;
               
    } while (countCase <= t);
    

    

    return 0;
}

void Show(char *s1, int r)
{
    printf("Caso #%d: %s\n", r, s1);
}