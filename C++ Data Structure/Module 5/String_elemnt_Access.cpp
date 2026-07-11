#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << s[0] << endl;
    cout << s.at(1) << endl;   // 0 index er element show korbe
    cout << s.front() << endl; // first element show kore
    cout << s.back() << endl;  // last element show kore

    return 0;
}