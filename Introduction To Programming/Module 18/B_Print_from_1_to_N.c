#include <stdio.h>
void print(int i, int n)
{
    if (i == n + 1)

        return;
    printf("%d\n", i);
    print(i + 1, n);
}

int main()
{
    int n;
    scanf("%d", &n);
    print(1, n);
    return 0;
}