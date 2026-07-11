
#include <stdio.h>
#include <limits.h>

int main()
{
    int n, i;
    scanf("%d ", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    int min = INT_MAX;
    int min_idx = i;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {

            min = arr[i];
            min_idx = i + 1;
        }
    }
    printf("%d %d", min, min_idx);
    return 0;
}