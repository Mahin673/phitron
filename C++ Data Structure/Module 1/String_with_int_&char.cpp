#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cin.ignore(); // to ignore the newline character after reading x
    char s[100];
    // fgets(s, 100, stdin); // for c style string
    cin.getline(s, 100);
    cout << x << endl
         << s << endl;
    return 0;
}

/* jodi space thake tahole
cin.getline(s,100); use korte hobe

input:15
      Hello World
output: 15
        Hello World
*/