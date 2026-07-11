#include <stdio.h>
int main()
{
    int n;
    int value = 1;
    scanf("%d", &n);
    int space = n - 1;
    for (int i = 1; i <= n; i++) // for line
    {
        for (int j = 1; j <= space; j++) // space print
        {
            printf(" ");
        }
        for (int j = 1; j <= value; j++) // star print
        {
            printf("%d", j);
        }

        printf("\n");
        value++;
        space--;
    }
    return 0;
}