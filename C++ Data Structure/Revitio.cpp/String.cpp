#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cin.ignore(); // ignore the newline character after reading x
    char s[100];
    cin.getline(s, 100); // space
    cout << x << endl
         << s << endl;
    return 0;
}
