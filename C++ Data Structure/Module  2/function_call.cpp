#include <bits/stdc++.h>
using namespace std;
int *p; // global pointer variable
void fun()
{
    int x = 10;
    // int *x = new int;
    //  *x = 10;
    p = &x;
    // p = x;
    cout << "Fun -> " << *p << endl;
}

int main()
{
    fun();

    cout << "Main -> " << *p << endl; // Output: 100

    return 0;
}