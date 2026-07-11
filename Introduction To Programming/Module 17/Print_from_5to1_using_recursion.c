#include <stdio.h>
void hello(int i)
{
    if (i == 0) // enr condition
    {
        return;
    }
    printf("%d\n", i);
    hello(i - 1); // increment or decrement
}
int main()
{
    int i = 5;
    hello(5); // initialization
    return 0;
}