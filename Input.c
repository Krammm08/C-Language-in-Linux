#include <stdio.h>
#include <string.h>

int main(void)
{
    int age;
    char name[50];
    printf("What's your name?\n");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    printf("How old are you?\n");
    scanf("%d", &age);
    if (age >= 18 && age < 60)
    {
        printf("Hi %s, you're on a legal age!\n", name);
    }
    else if (age < 18 && age > 0)
    {
        printf("Hi %s you're not on a legal age\n", name);
    }
    else if (age >= 60)
    {
        printf("Hi %s you're already a senior citizen!\n", name);
    }
}