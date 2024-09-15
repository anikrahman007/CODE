#include<cs50.h>
#include<stdio.h>

double add(double a, double b);
int main(void)
{

    double x = get_double("x is: ");
    double y = get_double("y is: ");

    printf("Number is %.50f\n", add(x, y));
        }



double add(double a, double b)
{
    return a / b;
}
