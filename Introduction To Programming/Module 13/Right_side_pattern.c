#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n;
    for (int i = 1; i <= n; i++) // for line
    {

        for (int j = 1; j <= space; j++) // for space
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++) // for star
        {
            printf("*");
        }

        printf("\n");

        star += 2;
        space--;
    }
    return 0;
}
/*
    *
  ***
*****

 */