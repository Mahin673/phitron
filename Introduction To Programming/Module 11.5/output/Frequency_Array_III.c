#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int fre[6] = {0};
    for (int i = 0; i < n; i++)
    {
        int val = a[i];
        fre[val]++;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d-> %d\n", i, fre[i]);
    }
    return 0;
}