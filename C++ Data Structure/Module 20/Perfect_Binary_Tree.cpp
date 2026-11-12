#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int x;
    while (cin >> x)
    {
        v.push_back(x);
    }
    int cnt = 0;
    int last = -1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != -1)
        {
            cnt++;
            last = i;
        }
    }
    int n = 1;
    while (n < cnt)
    {
        n = n * 2 + 1;
    }
    if (cnt == n && last == cnt - 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}