#include <stdio.h>
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

    for (int j = 0; j < n; j++)
    {
        printf("%d ", a[m - 1][j]);
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", a[i][n - 1]);
    }
    return 0;
}