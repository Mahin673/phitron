#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = n;
    for (int i = 1; i <= n; i++) // for line
    {
        for (int j = 1; j <= star; j++) // for star
        {
            printf("*");
        }
        printf("\n");
        star--;
    }
    return 0;
}