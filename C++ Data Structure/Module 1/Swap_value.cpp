#include <iostream>
#include <algorithm> //for shortcut
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    /*int temp = a;
    a = b;
    b = temp;
    */
    swap(a, b);                    // inbuilt function to swap values
    cout << a << " " << b << endl; // for many inputs: min({5,7,3,6,1})
    return 0;
}