#include <stdio.h>
#include <math.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int a[100][100];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if (m != n)
    {
        printf("NO");
        return 0;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                if (a[i][j] != 1)
                {
                    printf("NO");
                    return 0;
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
                    printf("NO");
                    return 0;
                }
            }
        }
    }

    printf("YES");
    return 0;
}