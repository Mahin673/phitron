#include <iostream>
using namespace std;
int main()
{
    int x = 12;
    if (x % 2 == 0)
    {
        cout << "Even\n";
    }
    else
    {
        cout << "Odd\n";
    }
    return 0;
}
// shortcut of if else statement is called ternary operator
/*
#include <iostream>
using namespace std;
int main()
{
    int x =6;
    (condition)? statement1: statement2;
    x%2==0? cout<<"Even\n": cout<<"Odd\n";
    return 0;
*/