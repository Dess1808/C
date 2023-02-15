#include<stdio.h>

int main(void)
{
    //controle variable
    int n = 0;
    int x = 0;
    int y = 0; 
    int difference = 0;
    int numberControl = 1;

    //input
    scanf("%d", &n);

    //array of sum odd numbers
    int sumOdd[n];

    //input diferences numbers
    for (int i = 0; i < n; i++)
    {
        //input
        scanf("%d%d", &x, &y);

        //solved difference, without negative number
        if ((x - y) < 0)
            difference = y - x; 
        else 
            difference = x - y; 

        //correcting difference
        if (difference != 0)
            difference--;
        
        //calc odd
        for (int j = 0; j < difference; j++)
        {
            
        }
        

    }
    
}