#include<stdio.h>
#include<math.h>

int main(void)
{
    double a;
    double b;
    double c;

    scanf("%lf %lf %lf", &a, &b, &c);

    //delta
    double delta = pow(b, 2) - 4 * a * c; //esse cara

    //teste
    if((a == 0) || (delta < 0))
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        //bhaskara
        double x1 = ((-b) + (sqrt(delta))) / (2 * a);
        double x2 = ((-b) - (sqrt(delta))) / (2 * a);

        printf("R1 = %.5f\n", x1);
        printf("R2 = %.5f\n", x2);
    }

    return 0;
}