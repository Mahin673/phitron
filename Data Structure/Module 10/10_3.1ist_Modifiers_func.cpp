#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};
    list<int> l2;
    // l2 = l;
    l2.assign(l.begin(), l.end());
    for (int val : l2)
    {
        cout << val << endl;
    }
    return 0;
}