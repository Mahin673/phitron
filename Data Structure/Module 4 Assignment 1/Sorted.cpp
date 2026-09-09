#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b = a;

        sort(b.begin(), b.end());

        if (a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}