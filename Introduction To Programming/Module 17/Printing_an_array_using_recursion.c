#include <stdio.h>

void printf_array(int arr[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    printf("%d\n", arr[i]);
    printf_array(arr, n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    printf_array(arr, n, 0);
    return 0;
}