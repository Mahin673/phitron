#include <stdio.h>
int main()
{
    int n;
    int star = 1;
    scanf("%d", &n);
    int space = n - 1;
    for (int i = 1; i <= n; i++) // for line
    {
        for (int j = 1; j <= space; j++) // space print
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++) // star print
        {
            printf("*");
        }

        printf("\n");
        star++;
        space--;
    }
    return 0;
}
/*
 *
 **
 ***
 ****
 */