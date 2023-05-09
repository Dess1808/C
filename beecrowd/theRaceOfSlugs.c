#include<stdio.h>

int main(void)
{
    //control variable
    int l, bigger = 0;

    while(scanf("%d", &l) != EOF)
    {
        //reset variable
        bigger = 0;

        //create array
        int speedArray[l];

        //input loop for bigger 
        for (int i = 0, size = l; i < size; i++)
        {
            scanf("%d", &speedArray[i]);
        }   

        for (int i = 0, size = l; i < size; i++)
        {
            //comparando
            if (speedArray[i] >= bigger)
                bigger = speedArray[i];
        } 

        //condition for print 
        if (bigger < 10)
            printf("%d\n", 1);
        else if ((bigger >= 10) && (bigger < 20))
            printf("%d\n", 2);
        else if (bigger >= 20)
            printf("%d\n", 3);
    }

    return 0;

}