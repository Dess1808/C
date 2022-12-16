#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    double a = get_double("A: ");
    double b = get_double("B: ");
    double c = get_double("C: ");

    //delta
    double delta = pow(b, 2) - 4 * a * c;

    //bhaskara
    double x1 = ((-b) + (sqrt(delta))) / (2 * a);
    double x2 = ((-b) - (sqrt(delta))) / (2 * a);

    printf("x1: %f\n", x1);
    printf("x2: %f\n", x2);
}