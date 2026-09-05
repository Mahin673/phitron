#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] % 7 == 0)
        {
            b[count] = a[i];
            count++;
        }
    }
    if (count == 0)
    {
        cout << "-1";
    }
    else
    {
        for (int i = count - 1; i >= 0; i--)
        {
            cout << b[i] << " ";
        }
    }

    return 0;
}