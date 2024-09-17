#include<stdio.h>
#include<stdlib.h>


void swap(int *a, int *b);

int main(void)
{
    int x;
    printf("Enter x: ");
    scanf("%i", &x);
    int y;
    printf("Enter y: ");
    scanf("%i", &y);

    printf("x is: %i, y is: %i\n", x, y);
    swap(&x, &y);
    printf("x is: %i, y is: %i\n", x, y);

}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


