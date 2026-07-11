#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int specific_col = 0;
    scanf("%d", &specific_col);
    for (int i = 0; i < r; i++)
    {
        printf("%d ", a[i][specific_col]);
    }
    return 0;
}
/*3 4 ->row 3 col 4
1 2 3 4
5 6 7 8
9 8 7 6

2 ->indx

3 7 7 ->output
18-6 module
*/