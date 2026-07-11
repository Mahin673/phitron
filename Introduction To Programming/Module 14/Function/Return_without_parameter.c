#include <stdio.h>

int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int Ans = a + b;
    return Ans;
}
int main()
{
    int Ans = sum();
    printf("%d", Ans);
    return 0;
}