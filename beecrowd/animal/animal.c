#include<stdio.h>
#include<string.h>

#define SIZE 12

int main(void)
{
    //controle de variaveis
    char vertebrado[] = "vertebrado";
    char invetebrado[] = "invertebrado";
    char ave[] = "ave";
    char mamifero[] = "mamifero";
    char inseto[] = "inseto";
    char anelideo[] = "anelideo";
    char onivoro[] = "onivoro";
    char carnivoro[] = "carnivoro";
    char herbivoro[] = "herbivoro";
    char hematofago[] = "hematofago";

    //animals
    char aguia[] = "aguia";
    char pombo[] = "pomba";
    char homem[] = "homem";
    char vaca[] = "vaca";
    char pulga[] = "pulga";
    char lagarta[] = "lagarta";
    char sanguessuga[] = "sanguessuga";
    char minhoca[] = "minhoca";

    //input variable
    char verInv[SIZE];
    char aveMam[SIZE];
    char carOni[SIZE];
    char oniHerb[SIZE];
    char insAne[SIZE];
    char hemHerb[SIZE];
    char hemOni[SIZE];
    

    //first input
    scanf("%s", verInv);

    /*
        SELECTION
    */

    //vertebrado
    if (strcmp(verInv, vertebrado) == 0)
    {   
        //ave & mamifero
        scanf("%s", aveMam);

        //ave
        if(strcmp(aveMam, ave) == 0)
        {
            //carnivoro & onivoro
            scanf("%s", carOni);

            //carnivoro
            if (strcmp(carOni, carnivoro) == 0)
            {
                printf("%s\n", aguia);
            }
            else if (strcmp(carOni, onivoro) == 0) //onivoro
            {
                printf("%s\n", pombo);
            }
        }
        else if(strcmp(aveMam, mamifero) == 0) //mamifero
        {
            //onivoro & herbivoro
            scanf("%s", oniHerb);

            //onivoro
            if(strcmp(oniHerb, onivoro) == 0)
            {
                printf("%s\n", homem);
            }
            else if (strcmp(oniHerb, herbivoro) == 0) //herbivoro
            {
                printf("%s\n", vaca);
            }
        }
    }
    else if (strcmp(verInv, invetebrado) == 0) //invertebrado
    {
        //inseto & analideo
        scanf("%s", insAne);

        //inseto
        if(strcmp(insAne, inseto) == 0)
        {
            //hematofogo & herbivoro
            scanf("%s", hemHerb);

            //hematofago
            if (strcmp(hemHerb, hematofago) == 0)
            {
                printf("%s\n", pulga);
            }
            else if (strcmp(hemHerb, herbivoro) == 0) //herbivoro
            {
                printf("%s\n", lagarta);
            }

        }
        else if (strcmp(insAne, anelideo) == 0) //anelideo
        {
            //hematofago & onivoro
            scanf("%s", hemOni);

            //hematofago
            if(strcmp(hemOni, hematofago) == 0)
            {
                //sanguessuga
                printf("%s\n", sanguessuga);
            }
            else if (strcmp(hemOni, onivoro) == 0) //onivoro
            {
                //minhoca
                printf("%s\n", minhoca);
            }
        }
    }

    return 0;
}