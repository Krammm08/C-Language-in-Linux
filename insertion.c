#include <stdio.h>

void ascending(int num[])
{
    for (int i = 1; i < 10; i++)
    {
        int j = i - 1;
        int temp = num[i];
        while (j >= 0 && temp < num[j])
        {
            num[j + 1] = num[j];
            j--;
        }
        num[j + 1] = temp;
    }
    printf("Ascending order:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", num[i]);
    }
    printf("\n");
}

void descending(int num[])
{
    for (int i = 1; i < 10; i++)
    {
        int j = i - 1;
        int temp = num[i];
        while (j >= 0 && temp > num[j])
        {
            num[j + 1] = num[j];
            j--;
        }
        num[j + 1] = temp;
    }
    printf("Descending order: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", num[i]);
    }
}
int main(void)
{
    int num[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Give me a number: ");
        scanf("%d", &num[i]);
    }
    ascending(num);
    descending(num);
    return 0;
}