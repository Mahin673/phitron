#include <stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    strcat(a, b); //(a+b) a represent kothay, b represent kake.
    printf("%s %s", a, b);
    return 0;
}