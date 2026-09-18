#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30};
    list<int> l2(v.begin(), v.end());
    l2.clear();
    cout << l2.size() << endl;
    // for (list<int>::iterator it = l2.begin(); it != l2.end(); it++)
    for (int val : l2)
    {
        cout << val << endl;
    }
    return 0;
}
