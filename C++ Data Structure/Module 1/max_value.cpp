#include <iostream>
#include <algorithm> //for shortcut
using namespace std;
int main()
{
    int a, b;
    // cin >> a >> b;
    /* if (a < b)
     {
         cout << a << endl;
     }
     else
     {
         cout << b << endl;
     }
  */
    cout << max({12, 23, 45, 67, 23}) << endl; // for many inputs: max({5,7,3,6,1})

    return 0;
}