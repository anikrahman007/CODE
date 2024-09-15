#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


int main(void)
{
    char s[20];
    printf("Type Your String: ");
    fgets(s, sizeof(s), stdin);
    //scanf("%19s", str);

    char *t = malloc(strlen(s) +1);
    if(t == NULL)
    {
        return 1;
    }

    for(int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = toupper(s[i]);
    }


    printf("%s", s);
    printf("%s", t);

    return 0;

    free(t);

}
