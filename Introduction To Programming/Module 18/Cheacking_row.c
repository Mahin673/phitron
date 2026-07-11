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

    if (r == 1)
    {
        printf("This is a row matrix.");
    }
    else
    {
        printf("This is not a row martix");
    }
}