#include <stdio.h>
long long int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    long long int multiply = fact(n - 1);
    return n * multiply;
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int ans = fact(n);
    printf("%lld", ans);
    return 0;
}