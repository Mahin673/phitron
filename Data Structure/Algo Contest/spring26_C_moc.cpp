#include <bits/stdc++.h>
using namespace std;
int main()

{
    int x, y;
    cin >> x >> y;
    int ans = 1;
    for (int i = 1; i <= x; i++)
    {
        ans = ans * y;
    }
    cout << ans << endl;
    return 0;
}