#include <stdio.h>
#include <stdbool.h>

void count_distinct(int a[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        bool is_unique = true;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                is_unique = false;
                break;
            }
        }
        if (is_unique == true)
            total++;
    }
    printf("%d", total);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    count_distinct(a, n);
    return 0;
}