#include <stdio.h>
int main()
{
    char a[5];
    printf("%d\n", a[5]);
    scanf("%s", &a);
    printf("%s\n", a);
    // Ascii value of null character is 0
    return 0;
}