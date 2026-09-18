#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 20, 50, 20, 70};
    replace(l.begin(), l.end(), 20, 100);

    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}