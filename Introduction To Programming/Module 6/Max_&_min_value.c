#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int max = 0;
    //INT_MIN use kora jay but amra jani je input gulo positive hobe tai 0 diye suru korechi.
    //Jodi neg value nite hoto tahole INT_MIN diye suru kortam.
    for (int i = 1; i <= n; i++)
    {
        int value;
        scanf("%d", &value);
        if (value > max)
        {
            max = value;
        }
    }
    printf("%d", max);
    return 0;
}