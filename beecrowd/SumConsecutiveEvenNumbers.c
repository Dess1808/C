#include<stdio.h>

int SumEvenNumber(int x);

int main(void)
{
    //control variable
    int x = 0;

    //input while x != 0
    while(1)
    {
        //input
        scanf("%d", &x);

        if (x != 0)
        {
            //control selection
            if ((x%2) != 0) //od
            {
                //update se for impar
                x++;

                //output
                printf("%d\n", SumEvenNumber(x));
            }
            else //even
            {
                //output
                printf("%d\n", SumEvenNumber(x));
            }
        }
        else 
            break;
    }
    
    return 0;
}

int SumEvenNumber(int x)
{
    //control varibale
    int count = x; //inciando pelo numero inserido 
    int sumAllEven = 0;
    int n = 5;

    //loop calc
    while(n)
    {
        if ((count%2) == 0)
        {
            //sum all
            sumAllEven += count;
            
            //next number
            count++;

            //control repetition
            n--;
        }
        else 
        {
            //next number
            count++;
            continue;
        }
    }

    return sumAllEven;
}
