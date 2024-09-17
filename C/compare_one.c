#include<stdio.h>
#include<cs50.h>
#include<string.h>


int main(void)
{
    char *s = get_string("S: ");
    char *t = get_string("T: ");

    if (strcmp(s,t) == 0)
    {
        //printf("Same,%c\n", s);
        printf("Same:%p\n", &s);
        printf("Same: %c\n", *s);
        printf("Same: %c\n", *(s+1));
        printf("Same: %c\n", *(s+2));
        printf("Same: %c\n", *(s+3));
        printf("Same: %i\n", *s);
    }
    else
    {
        printf("Different,%p\n", s);
        printf("Different:%p\n", t);
        printf("Different:%p\n", &s);
        printf("Different:%p\n", &t);
        printf("Different:%s\n", s);
        printf("Different:%s\n", t);
        //printf("Different:%p\n", *s);
        //printf("Different:%p\n", *t);
        printf("Different:%c\n", *s);
        printf("Different: %c\n", *t);
        printf("Different: %c\n", *(t+1));
        printf("Different: %c\n", *(t+2));
        printf("Different: %c\n", *(t+3));
        printf("Different: %i\n", *s);
        printf("Different: %i\n", *t);
        //printf("Different: %i\n", s);
        //printf("Different: %i\n", t);
        //printf("Different: %i\n", &s);
        //printf("Different: %i\n", &t);
    }
}
