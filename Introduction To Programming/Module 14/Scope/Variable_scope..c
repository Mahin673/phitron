#include <stdio.h>

int sum()
{
    int a = 20;
    printf("sum-> %d", a);
}
int main()

{
    int b = 10;
    printf("main->%d\n", b);
    sum();
    return 0;
}
/*
main->10
sum-> 20
*/