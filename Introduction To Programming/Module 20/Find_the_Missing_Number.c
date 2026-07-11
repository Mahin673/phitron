#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        long long int m, n;
        long long int a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        n = (a * b * c);
        if (m == 0)
        {
            printf("0\n");
        }
        else if (m % n == 0)
        {
            printf("%lld\n", m / n);
        }

        else
        {
            printf("-1\n");
        }
    }
    return 0;
}