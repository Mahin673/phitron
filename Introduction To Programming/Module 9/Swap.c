#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("A=%d\nB=%d ", a, b);
    return 0;
}