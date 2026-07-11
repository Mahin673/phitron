#include <stdio.h>
int main()
{
    int x = 10;
    printf("%d\n", x);
    // printf("%p\n", &x);

    int *ptr;
    ptr = &x;
    printf("%p\n", ptr); // x er address print korbe

    printf("%p\n", &ptr); // pointer er address print korbe
    return 0;
}