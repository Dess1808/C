#include<stdio.h>

int main(void)
{
    //controle variable
    int n = 0;
    int x = 0;
    int y = 0; 
    int difference = 0;
    int numberControl = 0;
    
    //input
    scanf("%d", &n);

    //array of sum odd numbers
    int sumOdd[n];
    int arrayOdd[n];

    //input diferences numbers
    for (int i = 0; i < n; i++)
    {
        //input
        scanf("%d%d", &x, &y);

        //solved difference, without negative number
        if ((x - y) < 0)
        {
            difference = y - x; 
            numberControl = x += 1;
        }
        else 
        {
            difference = x - y; 
            numberControl = y += 1;
        }
            
        //correcting difference
        if (difference > 0)
            difference--;
        
        //variable restart
        int oddNumberCount = 0;

        //calc odd
        for (int j = 0; j < difference; j++)
        {
            if ((numberControl % 2) != 0)
                oddNumberCount += numberControl;

            numberControl++;
        }

        //insert in array of odd
        arrayOdd[i] = oddNumberCount;
    }

    //output
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arrayOdd[i]);
    }
    
    return 0;
}