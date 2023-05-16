/*
    como faco para saber se Sheldon ganhou ou perdou, (sheldon sempre esquerda)

    todas as combinacoes de vitoria:

    tesoura - papel = tesoura vence! 11, -11 (tesourapapel - tesoura)
    tesoura - lagarto = tesoura vence! 24, -24 (tesouralagarto - tesoura)

    papel - pedra = papel vence 8, -8 (papelrocha)
    papel - Spock = papel vence! 15, -15 (papelSpock)
    
    pedra - lagarto = rocha vence! 5, -5(rochalagarto)
    pedra - tesoura = rocha vence!  -19, 19 (rochatesoura)
    
    lagarto - Spock = lagarto vence! 2, -2 (lagartospock)
    lagarto - papel = lagarto vence! -13, 13  (lagartopapel)
    
    Spock - tesoura = Spock vence! -26, 26 (spocktesoura)
    Spock - pedra = Spock vence! -7, 7 spockrocha
    

    identificar o jogo ganhador
    verificar quem vez o jogo ganhador


    palavras iguais = jogo empatado

    fazer teste para as duas combincoes possivel, diverente disso raj ganha

    outputs
    bazinga! - sheldon ganha
    Raj trapaceou! - sheldon perde
    De novo! - jogo empatado
*/

#include<stdio.h>
#include<string.h>

//defines of differences of chars, win possibilts Sheldon
#define tesouraPapel 11
#define tesouraLagarto 24
#define papelPedra 8
#define papelSpock 15
#define pedraLagarto 5
#define pedraTesoura -19
#define lagartoSpock 2
#define lagartoPapel -13
#define spockTesoura -26
#define spockPedra -7


void Show(char *s1, int r);

int main(void)
{
    //control variable center
    char sheldon[10];
    char raj[10];

    int t = 0;
    int countCase = 1;
    int dif = 0;

    //input t times
    scanf("%d", &t);

    do
    {
        //reset variables
        dif = 0;
        
        //input 
        scanf("%s%s", sheldon, raj);

        //selection test
        if (strcmp(sheldon, raj) != 0)
        {
            //difference
            dif = (sheldon[0] - raj[0]) + (sheldon[1] - raj[1]) + (sheldon[2] - raj[2]);

            switch (dif)
            {
                case tesouraPapel:
                    Show("Bazinga!", countCase);
                    break;

                case tesouraLagarto:
                    Show("Bazinga!", countCase);
                    break;
                
                case papelPedra:
                    Show("Bazinga!", countCase);
                    break;
                
                case papelSpock:
                    Show("Bazinga!", countCase);
                    break;

                case pedraLagarto:
                    Show("Bazinga!", countCase);
                    break;
                
                case pedraTesoura:
                    Show("Bazinga!", countCase);
                    break;
                
                case lagartoPapel:
                    Show("Bazinga!", countCase);
                    break;

                case lagartoSpock:
                    Show("Bazinga!", countCase);
                    break;
                
                case spockPedra:
                    Show("Bazinga!", countCase);
                    break;
                
                case spockTesoura:
                    Show("Bazinga!", countCase);
                    break;

                default:
                    Show("Raj trapaceou!", countCase);
                    break;
            }//end switch
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