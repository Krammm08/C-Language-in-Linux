#include <stdio.h>

void descending(int num[])
{
    for (int i = 0; i < 10; i++)
    {
        int j = i + 1;
        int temp = num[i];
        while (j < 10)
        {
            if (num[i] < num[j])
            {
                num[i] = num[j];
                num[j] = temp;
                temp = num[i];
            }
            j++;
        }
    }
    printf("Descending order: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", num[i]);
    }
    printf("\n");
}
void ascending(int num[])
{
    for (int i = 0; i < 10; i++)
    {
        int j = i + 1;
        int temp = num[i];
        while (j < 10)
        {
            if (num[i] > num[j])
            {
                num[i] = num[j];
                num[j] = temp;
                temp = num[i];
            }
            j++;
        }
    }
    printf("Ascending order: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", num[i]);
    }
    printf("\n");
}
int main(void)
{
    int num[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Give me a number: ");
        scanf("%d", &num[i]);
    }
    descending(num);
    ascending(num);
}