#include <stdio.h>
#include <string.h>
int is_palindrome(char s[])
{
    int a = strlen(s);
    for (int i = 0; i < a / 2; i++)
    {
        if (s[i] != s[a - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char s[1001];
    scanf("%s", &s);
    if (is_palindrome(s) == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}