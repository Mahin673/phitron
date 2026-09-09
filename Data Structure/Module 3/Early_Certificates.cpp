#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        int min_len = min(n, m);
        for (int i = 0; i < min_len; i++)
        {
            if (s[i] == t[i])
            {
                cout << s[i];
            }
            else
            {
                break;
            }
        }
        cout << endl;
    }
}