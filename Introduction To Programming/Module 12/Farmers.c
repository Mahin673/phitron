#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int newd = (a * c) / (a + b);
        int ans = c - newd;
        printf("%d\n", ans);
    }
    return 0;
}