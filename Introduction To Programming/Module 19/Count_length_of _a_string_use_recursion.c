#include <stdio.h>

int rec(char s[], int i)
{
    if (s[i] == '\0')
    {
        return 0;
    }
    int count = rec(s, i + 1);
    return count + 1;
}
int main()
{
    char s[201];
    fgets(s, 201, stdin);
    int ans = rec(s, 0);
    printf("%d", ans);
    return 0;
}