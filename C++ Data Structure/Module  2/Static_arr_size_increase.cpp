#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    int b[5];
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    b[3] = 50;
    b[4] = 60;
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
}