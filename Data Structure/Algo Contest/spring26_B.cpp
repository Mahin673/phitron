#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                found = true;
            }
        }
    }

    if (found)
    {
        cout << "Cheater detected" << endl;
    }
    else
    {
        cout << "All clear" << endl;
    }

    return 0;
}