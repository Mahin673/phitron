#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i *= 2)
    {
        cout << i << endl;
    }
    return 0;
}

/*
input : 1000
output: 1 2 4 8 16 32 128 256 512
multiply or divide thaklei O(logn)
*/