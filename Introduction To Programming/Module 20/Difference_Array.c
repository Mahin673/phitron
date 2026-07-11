#include <stdio.h>
int main()
{
    int a, n;
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &n);
        int a[1000], b[1000];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[i] > b[j])
                {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            if (a[i] > b[i])
                x = a[i] - b[i];
            else
                x = b[i] - a[i];
            printf("%d ", x);
        }
        printf("\n");
    }
    return 0;
}