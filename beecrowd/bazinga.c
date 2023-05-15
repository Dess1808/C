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

void Show(char *s1, int r);

int main(void)
{
    //control variable center
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

        //input games option
        scanf("%s%s", sheldon, raj);
        
        //if main DEBUGAR !!! verificar logica desses ifs
        if (strcmp(sheldon, raj) != 0)//not iquals
        {
            //concat of sheldon and raj
            game = strcat(sheldon, raj);

            //selection test
            if ((strcmp(game, "tesourapapel")) || (strcmp(game, "tesouralagarto")))
            {
                Show("Bazinga!", countCase);
            }
               
            if ((strcmp(game, "papelpedra")) || (strcmp(game, "papelSpock")))
                Show("Bazinga!", countCase);

            if ((strcmp(game, "pedralagarto")) || (strcmp(game, "pedratesoura")))
                Show("Bazinga!", countCase);

            if ((strcmp(game, "lagartospock")) || (strcmp(game, "lagartopapel")))
                Show("Bazinga!", countCase);

             if ((strcmp(game, "Spockpedra")) || (strcmp(game, "Spocktesoura")))
             {
                Show("Bazinga!", countCase);
             }
             else 
             {
                Show("Raj trapacou!", countCase);
             }   
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