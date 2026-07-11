#include <stdio.h>
#include <string.h>
int main()
{
    char s[15], t[15];
    scanf("%s %s", &s, &t);
    int len_s = strlen(s);
    int len_t = strlen(t);
    printf("%d %d\n", len_s, len_t);
    printf("%s%s\n", s, t);

    char temp = s[0];
    s[0] = t[0];
    t[0] = temp;
    printf("%s %s\n", s, t);
    return 0;
}