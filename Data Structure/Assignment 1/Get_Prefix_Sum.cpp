#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        v[i] = sum;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}