#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = n - 1; i >= 0; i--)
        cin >> v[i];

    for (int x : v)
        cout << x << " ";
    return 0;
}