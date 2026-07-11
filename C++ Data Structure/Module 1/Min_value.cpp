#include <iostream>
#include <algorithm> //for shortcut
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    /* if (a < b)
     {
         cout << a << endl;
     }
     else
     {
         cout << b << endl;
     }
  */
    cout << min(a, b) << endl; // for many inputs: min({5,7,3,6,1})

    return 0;
}