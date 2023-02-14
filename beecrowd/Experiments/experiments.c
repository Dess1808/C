/*
    utilizar identificadores para somar valores

    no calculo de porcentage, nesse compilador "clang", foi preciso cast para double, mesmo a variavel sendo declarada
    como double, para o calcular funcionar corretamento com o maximo de precisao, e preciso pelo menos "um" valor ser do tipo 
    ponto flutuante. 
*/

#include<stdio.h>

#define RABBIT 67
#define FROG 83
#define RAT 82
#define PERCENTAGE 37

int main(void)
{
    //variable control
    char animalLetter = 0;
    int amountAnimal = 0;
    int inputSize = 0;
    int totalAnimals = 0;

    //counts
    int countRabbit = 0;
    int countFrog = 0;
    int countRat = 0; 

    //input size
    scanf("%d", &inputSize);

    //input and count animals
    for (int i = 0; i < inputSize; i++)
    {
        //input 
        scanf("%d %c", &amountAnimal, &animalLetter);

        //test
        if ((int)animalLetter == RABBIT)
        {
            countRabbit += amountAnimal;
        }
        else if ((int)animalLetter == FROG)
        {
            countFrog += amountAnimal;
        }
        else if ((int)animalLetter == RAT)
        {
            countRat += amountAnimal;
        }
    }

    //total animals
    totalAnimals = countFrog + countRabbit + countRat;

    //percentages
    double rabbitPorcentege = (double)(countRabbit * 100) / totalAnimals;
    double ratPorcentege = (double)(countRat * 100) / totalAnimals;
    double frogPorcentege = (double)(countFrog * 100) / totalAnimals;

    //outputs
    printf("Total: %d cobaias\n", totalAnimals);
    printf("Total de coelhos: %d\n", countRabbit);
    printf("Total de ratos: %d\n", countRat);
    printf("Total de sapos: %d\n", countFrog);
    printf("Percentual de coelhos: %.2lf %c\n", rabbitPorcentege, PERCENTAGE);
    printf("Percentual de ratos: %.2lf %c\n", ratPorcentege, PERCENTAGE);
    printf("Percentual de sapos: %.2lf %c\n", frogPorcentege, PERCENTAGE);
    

    return 0;
}