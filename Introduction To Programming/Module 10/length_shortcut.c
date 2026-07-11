#include <stdio.h>
int main()
{
    char s[1001];
    scanf("%s", &s);

    int sz = strlen(s); // strlen function use kore string er length ber kora jay idrectly
    printf("%d\n", sz);
    return 0;
}