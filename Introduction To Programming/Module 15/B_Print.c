#include <stdio.h>

void print()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n - 1; i++)
    {
        printf("%d ", i);
    }
    printf("%d", n);
}

int main()
{
    print();
    return 0;
}
