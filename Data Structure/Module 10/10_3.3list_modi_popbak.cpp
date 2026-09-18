#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};
    // l.pop_back();
    l.pop_front();
    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}