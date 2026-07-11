#include <iostream>
using namespace std;
int main()
{
    int x = 9;
    // (condition)? T:F;
    (x % 2 == 0) ? cout << "Even\n" : cout << "Odd\n";
    return 0;
}