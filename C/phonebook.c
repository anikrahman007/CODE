#include<stdio.h>
#include<string.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");

    char name[20];
    char number[20];
    int age;

    printf("name: ");
    fgets(name, sizeof(name), stdin);
    printf("number: ");
    fgets(number, sizeof(number), stdin);
    printf("age: ");
    scanf("%i", &age);

    fprintf(file, "%s, %s, %i", name, number, age);
    fclose(file);
}
