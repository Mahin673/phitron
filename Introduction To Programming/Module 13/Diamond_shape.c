#include <stdio.h>
int main()
{
    int n, a, b;
    scanf("%d", &n);
    a = n - 1;
    b = 1;
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= b; j++)
        {
            printf("*");
        }
        if (i <= n - 1)
        {
            a--;
            b = b + 2;
        }
        else
        {
            a++;
            b = b - 2;
        }
        printf("\n");
    }
    return 0;
}