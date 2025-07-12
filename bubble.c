#include <stdio.h>

void ascedning(int num[])
{
    for (int i = 10; i >= 0; i--)
    {
        int j = 1;
        int temp = num[0];
        while (j < i)
        {
            if (temp > num[j])
            {
                num[j - 1] = num[j];
                num[j] = temp;
            }
            else
            {
                temp = num[j];
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
void descending(int num[])
{
    for (int i = 10; i >= 0; i--)
    {
        int j = 1;
        int temp = num[0];
        while (j < i)
        {
            if (temp < num[j])
            {
                num[j - 1] = num[j];
                num[j] = temp;
            }
            else
            {
                temp = num[j];
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
int main(void)
{
    int num[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Give me a number: ");
        scanf("%d", &num[i]);
    }
    ascedning(num);
    descending(num);
}