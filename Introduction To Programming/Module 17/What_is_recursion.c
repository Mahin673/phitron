#include <stdio.h>
void hello()
{
    printf("Hello");
    hello();
}

int main()
{
    printf("Hi");
    hello();
    return 0;
}