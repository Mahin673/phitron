#include <stdio.h>
int main()
{
    char s[10001];
    int a[26] = {0};
    scanf("%s", &s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        a[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (a[i] > 0)
        {
            printf("%c - %d\n", i + 'a', a[i]);
        }
    }
    return 0;
}
