#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
/*
n=5
A
A B
A B C
A B C D
A B C D E
*/