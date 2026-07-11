#include <stdio.h>
void print(int i, int n)
{
    if (i == n - 1)

        return;
    printf("%d ", i);
    print(i - 1, n);
}

int main()
{
    int n;
    scanf("%d", &n);
    print(n, 2);
    printf("%d", 1);
    return 0;
}