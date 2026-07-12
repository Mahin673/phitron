#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    // for (string ::iterator it = s.begin(); it < s.end(); it++)
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    // cout << *s.begin() << endl;  //0 index print kore.
    // cout << *(s.end()-1) << endl;  //Last index er ager index print kore.
    // cout << *s.end() << endl;  //Last index print kore.
    return 0;
}