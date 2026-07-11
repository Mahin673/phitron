#include <stdio.h>
void add()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("%d", sum);
}
int main()
{
    add();
    return 0;
}