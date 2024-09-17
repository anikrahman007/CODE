#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


int main(void)
{
    char a[20];
    printf("a: ");
    scanf("%s", a);

    char *b = malloc(strlen(a) + 1);

    if(b == NULL)
    {
        return 1;
    }

    strcpy(b, a);

    if(strlen(b) > 0)
    {
        b[0] = toupper(b[0]);
    }

    printf("%s\n", a);
    printf("%s\n", b);

    free(b);
}
