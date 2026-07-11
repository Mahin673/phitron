#include <stdio.h>
int main()
{
    char s[101];
    scanf("%s", &s);
    // fgets(s, 20, stdin);
    int count = 0;
    for (int i = 0; s[i] != 0; i++)
    {
        count++;
    }
    printf("%d\n", count);
    return 0;
}