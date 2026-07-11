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
    int x;
    scanf("%d", &x);
    int idx = -1;

    // search for x in a
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            idx = i;
            break;
        }
    }
    printf("%d", idx);
    return 0;
}