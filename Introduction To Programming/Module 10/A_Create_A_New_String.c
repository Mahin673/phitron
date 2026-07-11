#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    char a[1001];

    scanf("%s %s", &s, &a);

    int sz = strlen(s);
    int az = strlen(a);
    printf("%d %d\n", sz, az);
    printf("%s %s\n", s, a);
    return 0;
}