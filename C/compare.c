#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string s = get_string("S: ");
    string t = get_string("T: ");

    if (*s == *t)
    {
        printf("Same %c\n", *s);
    }
    else
    {
        printf("Different %c %c\n", *s, *t);
    }
}
