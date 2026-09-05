#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {1, 2, 3, 4, 5};
    /*vector<int> v = {100, 200, 300};
     v.insert(v.begin() + 2, v2.begin(),v2.end());
     */

    v.insert(v.begin() + 2, 100); // insert(pos,value)
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}