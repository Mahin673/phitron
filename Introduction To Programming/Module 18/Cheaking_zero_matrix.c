
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

    int total_val = r * c;
    int zero = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
            {
                zero++;
            }
        }
    }
    if (total_val == zero)
    {
        printf("This is a Zero Matrix.");
    }
    else
    {
        printf("This is not a Zero Matrix.");
    }
}