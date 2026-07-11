#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int x, max;
    cin >> max;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        if (x > max)
        {
            max = x;
        }
    }
    cout << max << endl;

    return 0;
}
