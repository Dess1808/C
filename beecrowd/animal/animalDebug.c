#include<stdio.h>
#include<string.h>
#include<cs50.h>

void Erro(char *ch);
void Show(char *animal);

int main(void)
{
    //controle variables
    char *vertebrado = "vertebrado";
    char *invetebrado = "invertebrado";
    char *ave = "ave";
    char *mamifero = "mamifero";
    char *inseto = "inseto";
    char *anelideo = "anelideo";
    char *onivoro = "onivoro";
    char *carnivoro = "carnivoro";
    char *herbivoro = "herbivoro";
    char *hematofago = "hematofago";

    //animals
    char *aguia = "aguia";
    char *pombo = "pombo";
    char *homem = "homem";
    char *vaca = "vaca";
    char *pulga = "pulga";
    char *lagarta = "lagarta";
    char *sanguessuga = "sanguessuga";
    char *minhoca = "minhoca";


    //firt input
    string verInv = get_string("vertebrado - invertebrado: ");

    /*
        SELECTION
    */

    //vertebrado
    if (strcmp(verInv, vertebrado) == 0)
    {   
        //ave & mamifero
        string aveMam = get_string("ave - mamifero?: ");

        //ave
        if(strcmp(aveMam, ave) == 0)
        {
            string carOni = get_string("carnivoro - onivoro?: ");

            //carnivoro
            if (strcmp(carOni, carnivoro) == 0)
            {
                Show(aguia);
            }
            else if (strcmp(carOni, onivoro) == 0) //onivoro
            {
                Show(pombo);
            }
            else 
            {
                Erro("opcao invalida");
            }
        }
        else if(strcmp(aveMam, mamifero) == 0) //mamifero
        {
            //onivoro & herbivoro
            string oniHerb = get_string("onivoro - herbivoro?: ");

            //onivoro
            if(strcmp(oniHerb, onivoro) == 0)
            {
                Show(homem);
            }
            else if (strcmp(oniHerb, herbivoro) == 0) //herbivoro
            {
                Show(vaca);
            }
            else 
            {
                Erro("Opcao invalida");
            }
        }
        else 
        {
            Erro("Opcao invalida\n");
        }
    }
    else if (strcmp(verInv, invetebrado) == 0) //invertebrado
    {
        //inseto & analideo
        string insAne = get_string("inseto - anelideo: ");

        //inseto
        if(strcmp(insAne, inseto) == 0)
        {
            //hematofogo & herbivoro
            string hemHerb = get_string("hermatofo - herbivoro: ");

            //hematofago
            if (strcmp(hemHerb, hematofago) == 0)
            {
                Show(pulga);
            }
            else if (strcmp(hemHerb, herbivoro) == 0) //herbivoro
            {
                Show(lagarta);
            }

        }
        else if (strcmp(insAne, anelideo) == 0) //anelideo
        {
            //hematofago & onivoro
            string hemOni = get_string("hematofogo - onivoro: ");

            //hematofago
            if(strcmp(hemOni, hematofago) == 0)
            {
                //sanguessuga
                Show(sanguessuga);
            }
            else if (strcmp(hemOni, onivoro) == 0) //onivoro
            {
                //minhoca
                Show(minhoca);
            }
            else 
            {
                Erro("Opcao invalida");
            }
        }
        else 
        {
            Erro("Opcao invalida");
        }
    }
    else 
    {
        //opcao invalida
        Erro("Opcao invalida");
    }

}


void Erro(char *ch)
{
    printf("%s\n", ch);
}

void Show(char *animal)
{
    printf("%s\n", animal);
}
    