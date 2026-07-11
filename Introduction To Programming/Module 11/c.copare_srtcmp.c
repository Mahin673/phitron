#include <stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    char val = strcmp(a, b);
    if (val == 0)
    {
        printf("%s", a);
    }
    else if (val < 0)
    {
        printf("%s", a);
    }
    else
    {
        printf("%s", b);
    }
    return 0;
}