#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};
    l.push_back(40);
    l.push_front(100);
    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}