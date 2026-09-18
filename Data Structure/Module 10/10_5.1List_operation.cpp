#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {20, 30, 10, 50, 30, 60, 60, 10};
    l.remove(10);

    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}