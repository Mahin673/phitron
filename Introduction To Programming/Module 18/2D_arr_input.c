#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    scanf("%d", &a[0][0]);
    scanf("%d", &a[0][1]);
    scanf("%d", &a[0][2]);
    scanf("%d", &a[1][0]);
    scanf("%d", &a[1][1]);
    scanf("%d", &a[1][2]);
    scanf("%d", &a[2][0]);
    scanf("%d", &a[2][1]);
    scanf("%d", &a[2][2]);

    printf("%d ", a[0][0]);
    printf("%d ", a[0][1]);
    printf("%d ", a[0][2]);
    printf("%d ", a[1][0]);
    printf("%d ", a[1][1]);
    printf("%d ", a[1][2]);
    printf("%d ", a[2][0]);
    printf("%d ", a[2][1]);
    printf("%d ", a[2][2]);

    return 0;
}