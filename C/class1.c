#include<stdio.h>

void increment(int *p);
int main(void)
{
    int a = 10;
    increment(&a);
    printf("a = %i\n", a);
}

void increment(int *p)
{
   *p = (*p) + 1;

}

