#include <stdio.h>
int main()
{
    int n, j;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int flag = 1;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (a[i] != a[j])
        {
            printf("NO");
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("YES");
    return 0;
}