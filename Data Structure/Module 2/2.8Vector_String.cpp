#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; // jodi space thake tahole nicher line a cin.ignore() use korte hobe.
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i]; // jodi space thakto tahole input getline(cin ,v[i])
    }
    for (string s : v)
    {
        cout << s << endl;
    }
    return 0;
}