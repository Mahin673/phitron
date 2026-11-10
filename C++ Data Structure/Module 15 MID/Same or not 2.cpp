#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    if (n != m)
    {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[n - 1 - i] != b[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}