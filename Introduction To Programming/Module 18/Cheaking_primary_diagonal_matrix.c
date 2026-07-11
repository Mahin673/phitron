#include <stdio.h>
#include <stdbool.h>
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

    bool is_diagonal = true;
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i != j)
                {
                    // we r now at outside diagonal
                    if (a[i][j] != 0)
                    {
                        is_diagonal = false;
                        printf("This is not a primary diagonal matrix.\n");
                    }
                }
            }
        }
        if (is_diagonal == true)
        {
            printf("This is a primary diagonal matrix.\n");
        }
    }
    else
    {
        printf("This is not a diagonal matrix.\n");
    }
}