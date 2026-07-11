#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int max = INT_MAX;
    //Jodi neg value nite hoto tahole INT_MIN diye suru kortam.
    for (int i = 1; i <= n; i++)
    {
        int value;
        scanf("%d", &value);
        if (value < max)
        {
            max = value;
        }
    }
    printf("%d", max);
    return 0;
}