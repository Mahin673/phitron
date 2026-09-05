#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    auto it = find(v.begin(), v.end(), 5); // here 100 finding value
    if (it == v.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }
    return 0;
}
/* OUTPUT: Found
Find func index ber korte pare na.
jodi bole value khuje
 ber korte taile find func use kora best
 */