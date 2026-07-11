#include <stdio.h>
int main()
{
    int a[3];
    int original[3];
    int temp;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
        original[i] = a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", original[i]);
    }

    return 0;
}